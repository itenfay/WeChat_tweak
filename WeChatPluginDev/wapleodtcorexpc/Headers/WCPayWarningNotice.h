//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayAntiCheatWarningTextInfo;

@interface WCPayWarningNotice : NSObject
{
    unsigned int _is_show_notice;
    WCPayAntiCheatWarningTextInfo *_text_info;
    NSString *_text_color;
    NSString *_text_dark_color;
    NSString *_lefticon;
    NSString *_lefticon_dark;
    NSString *_righticon;
    NSString *_righticon_dark;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *righticon_dark; // @synthesize righticon_dark=_righticon_dark;
@property(retain, nonatomic) NSString *righticon; // @synthesize righticon=_righticon;
@property(retain, nonatomic) NSString *lefticon_dark; // @synthesize lefticon_dark=_lefticon_dark;
@property(retain, nonatomic) NSString *lefticon; // @synthesize lefticon=_lefticon;
@property(retain, nonatomic) NSString *text_dark_color; // @synthesize text_dark_color=_text_dark_color;
@property(retain, nonatomic) NSString *text_color; // @synthesize text_color=_text_color;
@property(retain, nonatomic) WCPayAntiCheatWarningTextInfo *text_info; // @synthesize text_info=_text_info;
@property(nonatomic) unsigned int is_show_notice; // @synthesize is_show_notice=_is_show_notice;

@end

