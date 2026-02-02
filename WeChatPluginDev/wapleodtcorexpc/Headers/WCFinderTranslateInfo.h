//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTranslateInfo : NSObject
{
    NSString *_originText;
    unsigned long long _clientID;
    NSString *_translatedText;
    NSString *_translatedLang;
    NSString *_brandWording;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *brandWording; // @synthesize brandWording=_brandWording;
@property(copy, nonatomic) NSString *translatedLang; // @synthesize translatedLang=_translatedLang;
@property(copy, nonatomic) NSString *translatedText; // @synthesize translatedText=_translatedText;
@property(nonatomic) unsigned long long clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *originText; // @synthesize originText=_originText;

@end

