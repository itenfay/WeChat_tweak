//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderLiveDiscoverPreloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) float clientPredictScore; // @dynamic clientPredictScore;
@property(nonatomic) _Bool isPreloadRequest; // @dynamic isPreloadRequest;
@property(retain, nonatomic) NSData *requestPreloadBuff; // @dynamic requestPreloadBuff;
@property(nonatomic) unsigned int totalEffectivePreloadCnt; // @dynamic totalEffectivePreloadCnt;
@property(nonatomic) unsigned int totalFailPreloadCnt; // @dynamic totalFailPreloadCnt;
@property(nonatomic) unsigned int totalPreloadCnt; // @dynamic totalPreloadCnt;

@end

