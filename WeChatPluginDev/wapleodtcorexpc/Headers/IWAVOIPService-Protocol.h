//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWAVOIPService <NSObject>
+ (void)resumeVoipChattingCamera;
+ (void)pauseVoipChattingCamera;
+ (void)exitVoipChattingByCloseMinimizationWindow;
+ (void)exitVoipChatting;
+ (_Bool)isVoipChattingMicroPhoneMuteForAppid:(NSString *)arg1;
+ (_Bool)isVoipChattingForAppid:(NSString *)arg1;
+ (_Bool)isVoipWorking;
@end

