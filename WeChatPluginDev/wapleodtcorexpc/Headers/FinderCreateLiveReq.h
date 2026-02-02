//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveBulletin, FinderLiveClientStatus, FinderLiveModeInfo, FinderLiveTagInfo, FinderObjectDesc, LiveRoomImg, MicSetting_PurchaseMicSetting, NSData, NSMutableArray, NSString, PurchaseLivePreviewInfo, WxaGameLiveInfo;

@interface FinderCreateLiveReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int acknowledgeSpamMsg; // @dynamic acknowledgeSpamMsg;
@property(retain, nonatomic) NSString *applyUsername; // @dynamic applyUsername;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveBulletin *bulletin; // @dynamic bulletin;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(nonatomic) unsigned int chargeFlag; // @dynamic chargeFlag;
@property(nonatomic) unsigned long long chargeFreeFlag; // @dynamic chargeFreeFlag;
@property(nonatomic) unsigned int chargeIsMemberFree; // @dynamic chargeIsMemberFree;
@property(nonatomic) unsigned int chargeUnitPriceInWecoin; // @dynamic chargeUnitPriceInWecoin;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) FinderLiveClientStatus *clientStatus; // @dynamic clientStatus;
@property(retain, nonatomic) NSData *createLiveroomPrepareInfo; // @dynamic createLiveroomPrepareInfo;
@property(retain, nonatomic) NSData *createliveToken; // @dynamic createliveToken;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSMutableArray *freeOfChargeChatroomIdList; // @dynamic freeOfChargeChatroomIdList;
@property(retain, nonatomic) NSMutableArray *freeOfChargeFileIdList; // @dynamic freeOfChargeFileIdList;
@property(retain, nonatomic) NSMutableArray *freeOfChargeUsernameList; // @dynamic freeOfChargeUsernameList;
@property(retain, nonatomic) NSString *gameAppId; // @dynamic gameAppId;
@property(nonatomic) unsigned int gameLiveStreamType; // @dynamic gameLiveStreamType;
@property(nonatomic) unsigned int liveEntranceType; // @dynamic liveEntranceType;
@property(nonatomic) unsigned int liveMode; // @dynamic liveMode;
@property(retain, nonatomic) FinderLiveModeInfo *liveModeInfo; // @dynamic liveModeInfo;
@property(retain, nonatomic) LiveRoomImg *liveRoomImg; // @dynamic liveRoomImg;
@property(retain, nonatomic) NSString *noticeId; // @dynamic noticeId;
@property(nonatomic) unsigned int notificationmsgTriggerType; // @dynamic notificationmsgTriggerType;
@property(retain, nonatomic) FinderObjectDesc *objectDesc; // @dynamic objectDesc;
@property(retain, nonatomic) NSString *originalCoverImgUrl; // @dynamic originalCoverImgUrl;
@property(retain, nonatomic) MicSetting_PurchaseMicSetting *purchaseMicSetting; // @dynamic purchaseMicSetting;
@property(retain, nonatomic) PurchaseLivePreviewInfo *purchasePreviewInfo; // @dynamic purchasePreviewInfo;
@property(retain, nonatomic) NSMutableArray *redpacketReferChatroomIdList; // @dynamic redpacketReferChatroomIdList;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int screenOrientation; // @dynamic screenOrientation;
@property(retain, nonatomic) NSData *spamCheckInfo; // @dynamic spamCheckInfo;
@property(retain, nonatomic) FinderLiveTagInfo *tagInfo; // @dynamic tagInfo;
@property(retain, nonatomic) NSData *ticket; // @dynamic ticket;
@property(retain, nonatomic) NSMutableArray *topicInfoList; // @dynamic topicInfoList;
@property(retain, nonatomic) NSMutableArray *visibilityFileIdList; // @dynamic visibilityFileIdList;
@property(nonatomic) unsigned int visibilityMode; // @dynamic visibilityMode;
@property(retain, nonatomic) NSMutableArray *visibleChatroomIdList; // @dynamic visibleChatroomIdList;
@property(retain, nonatomic) NSMutableArray *visibleUsernameList; // @dynamic visibleUsernameList;
@property(retain, nonatomic) WxaGameLiveInfo *wxaGameLiveInfo; // @dynamic wxaGameLiveInfo;

@end

