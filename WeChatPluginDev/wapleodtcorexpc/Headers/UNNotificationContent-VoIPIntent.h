//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UserNotifications/UNNotificationContent.h>

@interface UNNotificationContent (VoIPIntent)
- (void)createVoIPIntentContentUsingAudioAvatarWithType:(unsigned long long)arg1 remark:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createVoIPIntentContentNoAvatarWithType:(unsigned long long)arg1 remark:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createVoIPIntentContentWithAvatarData:(id)arg1 type:(unsigned long long)arg2 remark:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createVoIPIntentContentWithAvatarData:(id)arg1 isLoadedFromNet:(_Bool)arg2 type:(unsigned long long)arg3 remark:(id)arg4 startTime:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)createVoIPIntentContentWithErrorRemark:(id)arg1 startTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createVoIPIntentContentWithContent:(id)arg1 remark:(id)arg2 isSucceed:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)VoIPNotificationContentWithDuration:(double)arg1 remark:(id)arg2;
@end

