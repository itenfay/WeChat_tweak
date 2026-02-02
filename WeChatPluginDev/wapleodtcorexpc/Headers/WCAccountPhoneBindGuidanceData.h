//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAccountPhoneBindGuidanceData : NSObject
{
    _Bool _guidanceHideIcon;
    NSString *_guidanceTitle;
    NSString *_guidanceTip;
    NSString *_guidanceBtn;
    NSString *_guidanceScene;
    NSString *_doubleCheckContent;
    NSString *_doubleCheckOKText;
    NSString *_doubleCheckCancelText;
    NSString *_guidanceHelp_tips;
    NSString *_guidanceHelp_jumpUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *guidanceHelp_jumpUrl; // @synthesize guidanceHelp_jumpUrl=_guidanceHelp_jumpUrl;
@property(retain, nonatomic) NSString *guidanceHelp_tips; // @synthesize guidanceHelp_tips=_guidanceHelp_tips;
@property(retain, nonatomic) NSString *doubleCheckCancelText; // @synthesize doubleCheckCancelText=_doubleCheckCancelText;
@property(retain, nonatomic) NSString *doubleCheckOKText; // @synthesize doubleCheckOKText=_doubleCheckOKText;
@property(retain, nonatomic) NSString *doubleCheckContent; // @synthesize doubleCheckContent=_doubleCheckContent;
@property(retain, nonatomic) NSString *guidanceScene; // @synthesize guidanceScene=_guidanceScene;
@property(nonatomic) _Bool guidanceHideIcon; // @synthesize guidanceHideIcon=_guidanceHideIcon;
@property(retain, nonatomic) NSString *guidanceBtn; // @synthesize guidanceBtn=_guidanceBtn;
@property(retain, nonatomic) NSString *guidanceTip; // @synthesize guidanceTip=_guidanceTip;
@property(retain, nonatomic) NSString *guidanceTitle; // @synthesize guidanceTitle=_guidanceTitle;

@end

