// Copyright 2013-present Facebook. All Rights Reserved.

#ifndef __xcscheme_XC_ActionContent_h
#define __xcscheme_XC_ActionContent_h

#include <xcscheme/XC/BuildableReference.h>

namespace xcscheme { namespace XC {

class ActionContent {
public:
    typedef std::shared_ptr <ActionContent> shared_ptr;

private:
    std::string                    _title;
    std::string                    _scriptText;
    BuildableReference::shared_ptr _environmentBuildable;
    std::string                    _emailRecipient;
    std::string                    _emailSubject;
    std::string                    _emailBody;
    bool                           _attachLogToEmail;

public:
    ActionContent();

public:
    inline std::string const &title() const
    { return _title; }

public:
    inline std::string const &scriptText() const
    { return _scriptText; }

public:
    inline BuildableReference::shared_ptr const &environmentBuildable() const
    { return _environmentBuildable; }
    inline BuildableReference::shared_ptr &environmentBuildable()
    { return _environmentBuildable; }

public:
    inline std::string const &emailRecipient() const
    { return _emailRecipient; }
    inline std::string const &emailSubject() const
    { return _emailSubject; }
    inline std::string const &emailBody() const
    { return _emailBody; }
    inline bool attachLogToEmail() const
    { return _attachLogToEmail; }

public:
    bool parse(plist::Dictionary const *dict);
};

} }

#endif  // !__xcscheme_XC_ActionContent_h
