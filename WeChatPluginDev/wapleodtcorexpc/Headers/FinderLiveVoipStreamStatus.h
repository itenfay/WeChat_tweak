//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveVoipStreamStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)description;

// Remaining properties
@property(nonatomic) unsigned int abnormalFlag; // @dynamic abnormalFlag;
@property(nonatomic) unsigned int avgBitrate; // @dynamic avgBitrate;
@property(nonatomic) unsigned long long endTime; // @dynamic endTime;
@property(nonatomic) int firstIFrameCostMs; // @dynamic firstIFrameCostMs;
@property(nonatomic) int firstUiFrameCostMs; // @dynamic firstUiFrameCostMs;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int networkType; // @dynamic networkType;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;
@property(nonatomic) unsigned int videoHeavyBlockCount; // @dynamic videoHeavyBlockCount;
@property(nonatomic) unsigned int videoLightBlockCount; // @dynamic videoLightBlockCount;
@property(nonatomic) unsigned int videoMediumBlockCount; // @dynamic videoMediumBlockCount;
@property(nonatomic) unsigned int videoRenderFps; // @dynamic videoRenderFps;
@property(nonatomic) unsigned int videoTotalBlockTimeMs; // @dynamic videoTotalBlockTimeMs;

@end

