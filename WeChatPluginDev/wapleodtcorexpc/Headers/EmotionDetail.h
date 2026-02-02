//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EmotionDesigner, EmotionLinkInfo, NSMutableArray, NSString, PackActivityInfo, PersonalDesigner;

@interface EmotionDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *consumeProductId; // @dynamic consumeProductId;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) EmotionDesigner *emotionDesigner; // @dynamic emotionDesigner;
@property(retain, nonatomic) EmotionLinkInfo *emotionLinkInfo; // @dynamic emotionLinkInfo;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *oldRedirectUrl; // @dynamic oldRedirectUrl;
@property(retain, nonatomic) NSString *packActivity; // @dynamic packActivity;
@property(retain, nonatomic) PackActivityInfo *packActivityInfo; // @dynamic packActivityInfo;
@property(retain, nonatomic) NSString *packAuthInfo; // @dynamic packAuthInfo;
@property(retain, nonatomic) NSString *packCopyright; // @dynamic packCopyright;
@property(retain, nonatomic) NSString *packDesc; // @dynamic packDesc;
@property(nonatomic) unsigned int packExpire; // @dynamic packExpire;
@property(nonatomic) unsigned int packFlag; // @dynamic packFlag;
@property(retain, nonatomic) NSString *packName; // @dynamic packName;
@property(retain, nonatomic) NSString *packPrice; // @dynamic packPrice;
@property(nonatomic) unsigned int packThumbCnt; // @dynamic packThumbCnt;
@property(retain, nonatomic) NSMutableArray *packThumbList; // @dynamic packThumbList;
@property(nonatomic) unsigned int packType; // @dynamic packType;
@property(nonatomic) unsigned int packWeCoinNum; // @dynamic packWeCoinNum;
@property(retain, nonatomic) NSString *panelUrl; // @dynamic panelUrl;
@property(retain, nonatomic) PersonalDesigner *personalDesigner; // @dynamic personalDesigner;
@property(retain, nonatomic) NSString *priceNum; // @dynamic priceNum;
@property(retain, nonatomic) NSString *priceType; // @dynamic priceType;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(retain, nonatomic) NSString *shareDesc; // @dynamic shareDesc;
@property(nonatomic) unsigned int thumbExtCount; // @dynamic thumbExtCount;
@property(retain, nonatomic) NSMutableArray *thumbExtList; // @dynamic thumbExtList;
@property(retain, nonatomic) NSString *timeLimitStr; // @dynamic timeLimitStr;
@property(nonatomic) int version; // @dynamic version;
@property(nonatomic) unsigned int weCoinNum; // @dynamic weCoinNum;

@end

