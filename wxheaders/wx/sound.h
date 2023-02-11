/////////////////////////////////////////////////////////////////////////////
// Name:        wx/sound.h
// Purpose:     wxSoundBase class
// Author:      Vaclav Slavik
// Modified by:
// Created:     2004/02/01
// Copyright:   (c) 2004, Vaclav Slavik
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_SOUND_H_BASE_
#define _WX_SOUND_H_BASE_

#include "wx/defs.h"

#if wxUSE_SOUND

#include "wx/object.h"

// ----------------------------------------------------------------------------
// wxSoundBase: common wxSound code and interface
// ----------------------------------------------------------------------------

// Flags for wxSound::Play

// NB: We can't use enum with some compilers, because they keep reporting
//     nonexistent ambiguities between Play(unsigned) and static Play(const
//     wxString&, unsigned).
#define wxSOUND_SYNC  ((unsigned)0)
#define wxSOUND_ASYNC ((unsigned)1)
#define wxSOUND_LOOP  ((unsigned)2)

// Base class for wxSound implementations
class WXDLLIMPEXP_ADV wxSoundBase : public wxObject
{
public:
    // Play the sound:
    bool Play(unsigned flags = wxSOUND_ASYNC) const
    {
        wxASSERT_MSG( (flags & wxSOUND_LOOP) == 0 ||
                      (flags & wxSOUND_ASYNC) != 0,
                     wxT("sound can only be looped asynchronously") );
        return DoPlay(flags);
    }

    // Plays sound from filename:
    static bool Play(const wxString& filename, unsigned flags = wxSOUND_ASYNC);

protected:
    virtual bool DoPlay(unsigned flags) const = 0;
};

// ----------------------------------------------------------------------------
// wxSound class implementation
// ----------------------------------------------------------------------------

#if defined(__WINDOWS__)
    #include "wx/msw/sound.h"
#elif defined(__WXMAC__)
    #ifndef __CPPAST__
        #include "wx/osx/sound.h"
    #else
#ifndef _WX_SOUND_H_
#define _WX_SOUND_H_

#if wxUSE_SOUND

#include "wx/object.h"

class WXDLLIMPEXP_FWD_CORE wxSoundTimer;

class WXDLLIMPEXP_CORE wxSoundData
{
public :
    wxSoundData();
    virtual ~wxSoundData();

    virtual bool Play(unsigned int flags) = 0;
    // stops the sound and deletes the optional timer
    virtual void Stop();
    // mark this to be deleted
    virtual void MarkForDeletion();
    virtual bool IsMarkedForDeletion() const { return m_markedForDeletion; }

    // does the true work of stopping and cleaning up
    virtual void DoStop() = 0;

protected:
    unsigned int m_flags;
    bool m_markedForDeletion;
} ;

class WXDLLIMPEXP_CORE wxSound : public wxSoundBase
{
public:
    wxSound();
    wxSound(const wxString& fileName, bool isResource = false);
    wxSound(size_t size, const void* data);
    virtual ~wxSound();

    // Create from resource or file
    bool  Create(const wxString& fileName, bool isResource = false);
    // Create from data
    bool Create(size_t size, const void* data);

    bool IsOk() const { return m_data != NULL; }

    // Stop playing any sound
    static void Stop();

    // Returns true if a sound is being played
    static bool IsPlaying();

    // Notification when a sound has stopped
    static void SoundStopped(const wxSoundData* data);

protected:
    bool    DoPlay(unsigned flags) const wxOVERRIDE;
    void    Init();

private:
    // data of this object
    class wxSoundData *m_data;

    wxDECLARE_NO_COPY_CLASS(wxSound);
};

#endif
#endif
#endif
    // _WX_SOUND_H_
#elif defined(__UNIX__)
    #include "wx/unix/sound.h"
#endif

// ----------------------------------------------------------------------------
// wxSoundBase methods
// ----------------------------------------------------------------------------

inline bool wxSoundBase::Play(const wxString& filename, unsigned flags)
{
    wxSound snd(filename);
    return snd.IsOk() ? snd.Play(flags) : false;
}

#endif // wxUSE_SOUND

#endif // _WX_SOUND_H_BASE_
