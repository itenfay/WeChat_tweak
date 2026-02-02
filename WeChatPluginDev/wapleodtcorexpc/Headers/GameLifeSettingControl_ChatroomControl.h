//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameLifeSettingControl_AtInfo, GameLifeSettingControl_MultiTaskInfo, GameLifeSettingControl_TickleInfo;

@interface GameLifeSettingControl_ChatroomControl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GameLifeSettingControl_AtInfo *atInfo; // @dynamic atInfo;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(retain, nonatomic) GameLifeSettingControl_MultiTaskInfo *multiTaskInfo; // @dynamic multiTaskInfo;
@property(retain, nonatomic) GameLifeSettingControl_TickleInfo *tickleInfo; // @dynamic tickleInfo;

@end

