//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface StreamVoiceInputBehaviorReporter : NSObject
{
}

+ (void)reportLogType:(unsigned int)arg1 InputType:(unsigned int)arg2 sessionID:(id)arg3;
+ (void)reportSettingClickCantonese;
+ (void)reportComeInLanguageSettingView;
+ (void)reportChatViewSwitchToCantonese;
+ (void)reportShowLanguageSwitchView;
+ (void)reportShowInitView;
+ (void)reportFullScreenLongClickTime:(int)arg1;
+ (void)reportFullScreenLongClick:(int)arg1;
+ (void)reportVoiceIconClick:(int)arg1;
+ (void)reportSmileIconClick:(int)arg1;
+ (void)reportClear:(int)arg1;
+ (void)reportFail:(int)arg1;
+ (void)reportVoiceInputTime:(int)arg1;
+ (void)reportTextChangeReturn:(int)arg1;
+ (void)reportTextChangeCount:(int)arg1 Time:(int)arg2;
+ (void)reportTextClick:(int)arg1;
+ (void)reportLongClickTime:(int)arg1;
+ (void)reportLongClick:(int)arg1;
+ (void)reportClick:(int)arg1;
+ (void)reportSend:(int)arg1;
+ (void)reportCancel:(int)arg1;

@end

