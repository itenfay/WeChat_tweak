//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FavorComposeInfo, NSData, NSMutableArray, NSString;

@interface BusiF2FPlaceOrderReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *amountRemindSign; // @dynamic amountRemindSign;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cancelF2Fid; // @dynamic cancelF2Fid;
@property(nonatomic) unsigned int cancelReason; // @dynamic cancelReason;
@property(nonatomic) unsigned int channel; // @dynamic channel;
@property(retain, nonatomic) NSString *checkRecvNameSign; // @dynamic checkRecvNameSign;
@property(retain, nonatomic) NSData *cpuId; // @dynamic cpuId;
@property(nonatomic) unsigned int dynamicCodeSource; // @dynamic dynamicCodeSource;
@property(retain, nonatomic) NSString *dynamicCodeUrl; // @dynamic dynamicCodeUrl;
@property(nonatomic) _Bool enableUnionPay; // @dynamic enableUnionPay;
@property(retain, nonatomic) NSMutableArray *extraBuyDetailInfos; // @dynamic extraBuyDetailInfos;
@property(retain, nonatomic) FavorComposeInfo *favorComposeInfo; // @dynamic favorComposeInfo;
@property(retain, nonatomic) NSString *favorRespSign; // @dynamic favorRespSign;
@property(retain, nonatomic) NSString *inputRecvName; // @dynamic inputRecvName;
@property(nonatomic) _Bool installedUnionPay; // @dynamic installedUnionPay;
@property(nonatomic) _Bool isOpenTouch; // @dynamic isOpenTouch;
@property(nonatomic) _Bool isRoot; // @dynamic isRoot;
@property(retain, nonatomic) NSString *mchName; // @dynamic mchName;
@property(nonatomic) unsigned int mchTime; // @dynamic mchTime;
@property(retain, nonatomic) NSString *mchType; // @dynamic mchType;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int originAmount; // @dynamic originAmount;
@property(retain, nonatomic) NSString *payerDesc; // @dynamic payerDesc;
@property(retain, nonatomic) NSString *qqExtendInfo; // @dynamic qqExtendInfo;
@property(retain, nonatomic) NSString *qrcodeId; // @dynamic qrcodeId;
@property(retain, nonatomic) NSString *qrcodeSenderUsername; // @dynamic qrcodeSenderUsername;
@property(retain, nonatomic) NSString *rcverDesc; // @dynamic rcverDesc;
@property(retain, nonatomic) NSString *rcvrTicket; // @dynamic rcvrTicket;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;
@property(retain, nonatomic) NSString *receiverTrueName; // @dynamic receiverTrueName;
@property(retain, nonatomic) NSString *receiverUsername; // @dynamic receiverUsername;
@property(nonatomic) unsigned int scanScene; // @dynamic scanScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int totalAmount; // @dynamic totalAmount;
@property(retain, nonatomic) NSData *uid; // @dynamic uid;
@property(nonatomic) unsigned int unpayType; // @dynamic unpayType;
@property(retain, nonatomic) NSString *wifiBssid; // @dynamic wifiBssid;
@property(nonatomic) unsigned int wifiUpdatatime; // @dynamic wifiUpdatatime;

@end

