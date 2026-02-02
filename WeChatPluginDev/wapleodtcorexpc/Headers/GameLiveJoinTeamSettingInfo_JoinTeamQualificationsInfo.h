//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameTeamUpPaymentSetting, GameTeamUpSpecialGiftSettingDetail, NSString;

@interface GameLiveJoinTeamSettingInfo_JoinTeamQualificationsInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GameTeamUpPaymentSetting *paymentSetting; // @dynamic paymentSetting;
@property(retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *specialGiftSetting; // @dynamic specialGiftSetting;
@property(retain, nonatomic) NSString *tips; // @dynamic tips;
@property(nonatomic) unsigned int value; // @dynamic value;

@end

