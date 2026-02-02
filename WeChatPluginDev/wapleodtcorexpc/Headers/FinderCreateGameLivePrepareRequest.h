//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLocation, FinderMedia, FinderModShortcutWording, GameTeamUpPaymentSetting, GameTeamUpSpecialGiftSettingDetail, NSData, NSMutableArray, NSString;

@interface FinderCreateGameLivePrepareRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int acknowledgeSpamMsg; // @dynamic acknowledgeSpamMsg;
@property(nonatomic) unsigned int anchorStatusFlag; // @dynamic anchorStatusFlag;
@property(nonatomic) unsigned int anchorSwitchFlag; // @dynamic anchorSwitchFlag;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderMedia *coverImg; // @dynamic coverImg;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *gameUserId; // @dynamic gameUserId;
@property(nonatomic) unsigned int joinTeamUpSetting; // @dynamic joinTeamUpSetting;
@property(nonatomic) unsigned int liveEntranceType; // @dynamic liveEntranceType;
@property(nonatomic) unsigned int liveMode; // @dynamic liveMode;
@property(retain, nonatomic) NSString *livegameAuthTicket; // @dynamic livegameAuthTicket;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
@property(retain, nonatomic) GameTeamUpPaymentSetting *paymentSetting; // @dynamic paymentSetting;
@property(nonatomic) unsigned int platformId; // @dynamic platformId;
@property(retain, nonatomic) NSData *presetLotteryPanel; // @dynamic presetLotteryPanel;
@property(retain, nonatomic) NSMutableArray *redpacketReferChatroomIdList; // @dynamic redpacketReferChatroomIdList;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) FinderModShortcutWording *shortcutWordingSetting; // @dynamic shortcutWordingSetting;
@property(retain, nonatomic) NSData *spamCheckInfo; // @dynamic spamCheckInfo;
@property(retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *specialGiftSetting; // @dynamic specialGiftSetting;
@property(retain, nonatomic) NSMutableArray *visibilityFileIdList; // @dynamic visibilityFileIdList;
@property(nonatomic) unsigned int visibilityMode; // @dynamic visibilityMode;
@property(retain, nonatomic) NSMutableArray *visibleChatroomIdList; // @dynamic visibleChatroomIdList;
@property(retain, nonatomic) NSMutableArray *visibleUsernameList; // @dynamic visibleUsernameList;

@end

