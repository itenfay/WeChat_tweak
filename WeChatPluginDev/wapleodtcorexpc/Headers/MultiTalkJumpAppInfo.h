//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MultiTalkJumpAppWordingInfo, NSString;

@interface MultiTalkJumpAppInfo : NSObject
{
    int _type;
    MultiTalkJumpAppWordingInfo *_wordingInfo;
    NSString *_iconUrlString;
    NSString *_defaultIconName;
    NSString *_schemeUrlStringInDialog;
    NSString *_schemeUrlStringInBanner;
    NSString *_htmlUrlStringInDialog;
    NSString *_htmlUrlStringInBanner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *htmlUrlStringInBanner; // @synthesize htmlUrlStringInBanner=_htmlUrlStringInBanner;
@property(retain, nonatomic) NSString *htmlUrlStringInDialog; // @synthesize htmlUrlStringInDialog=_htmlUrlStringInDialog;
@property(retain, nonatomic) NSString *schemeUrlStringInBanner; // @synthesize schemeUrlStringInBanner=_schemeUrlStringInBanner;
@property(retain, nonatomic) NSString *schemeUrlStringInDialog; // @synthesize schemeUrlStringInDialog=_schemeUrlStringInDialog;
@property(retain, nonatomic) NSString *defaultIconName; // @synthesize defaultIconName=_defaultIconName;
@property(retain, nonatomic) NSString *iconUrlString; // @synthesize iconUrlString=_iconUrlString;
@property(retain, nonatomic) MultiTalkJumpAppWordingInfo *wordingInfo; // @synthesize wordingInfo=_wordingInfo;
@property(nonatomic) int type; // @synthesize type=_type;

@end

