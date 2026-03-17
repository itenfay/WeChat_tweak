//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAVOIPProxy : NSObject
{
}

+ (void)resumeVoipChattingCamera;
+ (void)pauseVoipChattingCamera;
+ (void)exitVoipChattingByCloseMinimizationWindow;
+ (void)exitVoipChatting;
+ (_Bool)isVoipChattingMicroPhoneMuteForAppid:(id)arg1;
+ (_Bool)isVoipChattingForAppid:(id)arg1;
+ (_Bool)isVoipWorking;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

