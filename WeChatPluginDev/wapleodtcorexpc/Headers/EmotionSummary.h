//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EmotionLinkInfo, EmotionStatisticsInfo, NSMutableArray, NSString;

@interface EmotionSummary : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSString *designerIpsetKey; // @dynamic designerIpsetKey;
@property(retain, nonatomic) NSMutableArray *exposeThumbList; // @dynamic exposeThumbList;
@property(retain, nonatomic) NSString *exptDesc; // @dynamic exptDesc;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *introduce; // @dynamic introduce;
@property(retain, nonatomic) EmotionLinkInfo *link; // @dynamic link;
@property(retain, nonatomic) NSString *packAuthInfo; // @dynamic packAuthInfo;
@property(retain, nonatomic) NSString *packCopyright; // @dynamic packCopyright;
@property(retain, nonatomic) NSString *packDesc; // @dynamic packDesc;
@property(nonatomic) unsigned int packExpire; // @dynamic packExpire;
@property(nonatomic) unsigned int packFlag; // @dynamic packFlag;
@property(retain, nonatomic) NSString *packName; // @dynamic packName;
@property(retain, nonatomic) NSString *packPrice; // @dynamic packPrice;
@property(nonatomic) unsigned int packType; // @dynamic packType;
@property(nonatomic) unsigned int packWeCoinNum; // @dynamic packWeCoinNum;
@property(retain, nonatomic) NSString *panelUrl; // @dynamic panelUrl;
@property(retain, nonatomic) NSString *priceNum; // @dynamic priceNum;
@property(retain, nonatomic) NSString *priceType; // @dynamic priceType;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(retain, nonatomic) NSString *sendInfo; // @dynamic sendInfo;
@property(retain, nonatomic) EmotionStatisticsInfo *statistics; // @dynamic statistics;
@property(retain, nonatomic) NSString *tagUri; // @dynamic tagUri;
@property(retain, nonatomic) NSString *timeLimitStr; // @dynamic timeLimitStr;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;
@property(nonatomic) unsigned int totalThumbNum; // @dynamic totalThumbNum;
@property(nonatomic) unsigned int weCoinNum; // @dynamic weCoinNum;

@end

