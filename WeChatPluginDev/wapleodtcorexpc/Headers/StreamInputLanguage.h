//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface StreamInputLanguage : NSObject
{
    unsigned int _languageType;
    NSString *_languageName;
    NSString *_voicetransIcon;
    NSString *_voicetransIconEnglish;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *voicetransIconEnglish; // @synthesize voicetransIconEnglish=_voicetransIconEnglish;
@property(retain, nonatomic) NSString *voicetransIcon; // @synthesize voicetransIcon=_voicetransIcon;
@property(retain, nonatomic) NSString *languageName; // @synthesize languageName=_languageName;
@property(nonatomic) unsigned int languageType; // @synthesize languageType=_languageType;
- (id)initWithLanguageType:(unsigned int)arg1 LanguageName:(id)arg2 transIcon:(id)arg3 transIconEnglish:(id)arg4;
- (id)initWithLanguageType:(unsigned int)arg1 LanguageName:(id)arg2;

@end

