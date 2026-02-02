//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameJoinTeamSetting_GameTeamUpSpecialGiftSetting, GameTeamUpPaymentSetting;

@interface GameJoinTeamSetting : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int curJoinTeamMode; // @dynamic curJoinTeamMode;
@property(retain, nonatomic) GameTeamUpPaymentSetting *paymentSetting; // @dynamic paymentSetting;
@property(retain, nonatomic) GameJoinTeamSetting_GameTeamUpSpecialGiftSetting *specialGiftSetting; // @dynamic specialGiftSetting;

@end

