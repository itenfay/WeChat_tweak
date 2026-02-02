//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, EmotionBanner, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetEmotionListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) EmotionBanner *banner; // @dynamic banner;
@property(nonatomic) unsigned int bannerSetCount; // @dynamic bannerSetCount;
@property(retain, nonatomic) NSMutableArray *bannerSetList; // @dynamic bannerSetList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cellCount; // @dynamic cellCount;
@property(retain, nonatomic) NSMutableArray *cellList; // @dynamic cellList;
@property(nonatomic) unsigned int cellSetCount; // @dynamic cellSetCount;
@property(retain, nonatomic) NSMutableArray *cellSetList; // @dynamic cellSetList;
@property(nonatomic) unsigned int emotionCount; // @dynamic emotionCount;
@property(retain, nonatomic) NSString *emotionExptConfig; // @dynamic emotionExptConfig;
@property(retain, nonatomic) NSMutableArray *emotionList; // @dynamic emotionList;
@property(retain, nonatomic) SKBuiltinBuffer_t *emotionListBuf; // @dynamic emotionListBuf;
@property(retain, nonatomic) NSMutableArray *emotionSetInfo; // @dynamic emotionSetInfo;
@property(nonatomic) unsigned int emotionSetInfoCount; // @dynamic emotionSetInfoCount;
@property(nonatomic) unsigned int newBannerCount; // @dynamic newBannerCount;
@property(retain, nonatomic) NSMutableArray *newBannerList; // @dynamic newBannerList;
@property(nonatomic) unsigned int recentHotNum; // @dynamic recentHotNum;
@property(nonatomic) unsigned long long reportRequestId; // @dynamic reportRequestId;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqBuf; // @dynamic reqBuf;
@property(nonatomic) unsigned int topHotNum; // @dynamic topHotNum;

@end

