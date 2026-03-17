//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VOIPUIHelper : NSObject
{
}

+ (_Bool)shouldUseNewVolumeStrategy;
+ (_Bool)shouldBluetoothStartEarlier;
+ (int)VoIPMPSwitchPortType:(id)arg1;
+ (_Bool)shouldSupportVideoHintShow;
+ (_Bool)shouldSupportIlinkAddMember;
+ (_Bool)shouldBlockUserRingRecommend;
+ (_Bool)shouldEnableAudioUnitLogic;
+ (_Bool)shouldEnableVoIPCoreAudioLogic;
+ (id)FormVoipMessageContentWithInviteType:(int)arg1 RoomId:(unsigned long long)arg2 Key:(long long)arg3 UiStatus:(int)arg4 RecvTime:(unsigned int)arg5 WordingType:(unsigned int)arg6 Duration:(unsigned int)arg7;
+ (id)FormVoipMessageWithUsrname:(id)arg1 andInviteType:(int)arg2 CallFromMyself:(_Bool)arg3 WordingType:(unsigned int)arg4 Duration:(unsigned int)arg5 roomID:(unsigned long long)arg6 roomKey:(long long)arg7;
+ (id)FormVoipMessageWithUsrname:(id)arg1 andInviteType:(int)arg2 CallFromMyself:(_Bool)arg3 WordingType:(unsigned int)arg4 Duration:(unsigned int)arg5;

@end

