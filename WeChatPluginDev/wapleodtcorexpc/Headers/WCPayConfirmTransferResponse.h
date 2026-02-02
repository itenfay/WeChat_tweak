//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class InterceptWin, NSString, OpenMinimchGuide, WCPayJumpRemindInfo, WCPayRealnameGuideInfo;

@interface WCPayConfirmTransferResponse : NSObject
{
    long long m_llFee;
    NSString *m_nsFeeType;
    NSString *m_nsPayer;
    NSString *m_nsReceiver;
    WCPayRealnameGuideInfo *realnameGuideInfo;
    WCPayJumpRemindInfo *_jumpRemindInfo;
    InterceptWin *_intercept_win;
    InterceptWin *_intercept_win_after;
    NSString *_left_button_continue;
    NSString *_half_page_info;
    OpenMinimchGuide *_open_minimch_guide;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenMinimchGuide *open_minimch_guide; // @synthesize open_minimch_guide=_open_minimch_guide;
@property(retain, nonatomic) NSString *half_page_info; // @synthesize half_page_info=_half_page_info;
@property(retain, nonatomic) NSString *left_button_continue; // @synthesize left_button_continue=_left_button_continue;
@property(retain, nonatomic) InterceptWin *intercept_win_after; // @synthesize intercept_win_after=_intercept_win_after;
@property(retain, nonatomic) InterceptWin *intercept_win; // @synthesize intercept_win=_intercept_win;
@property(retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo; // @synthesize jumpRemindInfo=_jumpRemindInfo;
@property(retain, nonatomic) WCPayRealnameGuideInfo *realnameGuideInfo; // @synthesize realnameGuideInfo;
@property(retain, nonatomic) NSString *m_nsReceiver; // @synthesize m_nsReceiver;
@property(retain, nonatomic) NSString *m_nsPayer; // @synthesize m_nsPayer;
@property(retain, nonatomic) NSString *m_nsFeeType; // @synthesize m_nsFeeType;
@property(nonatomic) long long m_llFee; // @synthesize m_llFee;

@end

