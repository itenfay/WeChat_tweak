//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameLifeSettingControl_HalfScreen, GameLifeSettingControl_WeappJumpInfo, NSString;

@interface GameLifeSettingControl_JumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GameLifeSettingControl_HalfScreen *halfScreen; // @dynamic halfScreen;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) GameLifeSettingControl_WeappJumpInfo *weappJumpInfo; // @dynamic weappJumpInfo;

@end

