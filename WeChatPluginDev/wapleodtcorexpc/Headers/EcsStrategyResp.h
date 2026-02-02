//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, EcsAppMsgCoverPreloadStrategy, EcsBoxSearchStrategy, EcsFollowBarStrategy, EcsMsgResortControlInfo, EcsMsgResortUserConfig, EcsNotifyStrategy, EcsProductEvaluationCardStrategy, EcsRecommendFeedsStrategy, EcsRemainActicleStrategy, EcsStrategyControlInfo;

@interface EcsStrategyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) EcsAppMsgCoverPreloadStrategy *appmsgCoverPreloadStrategy; // @dynamic appmsgCoverPreloadStrategy;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) EcsBoxSearchStrategy *boxSearchStrategy; // @dynamic boxSearchStrategy;
@property(retain, nonatomic) EcsFollowBarStrategy *followBarStrategy; // @dynamic followBarStrategy;
@property(retain, nonatomic) EcsMsgResortControlInfo *msgResortControlInfo; // @dynamic msgResortControlInfo;
@property(retain, nonatomic) EcsMsgResortUserConfig *msgResortUserConfig; // @dynamic msgResortUserConfig;
@property(retain, nonatomic) EcsNotifyStrategy *notifyStrategy; // @dynamic notifyStrategy;
@property(retain, nonatomic) EcsProductEvaluationCardStrategy *productEvaluationCardStrategy; // @dynamic productEvaluationCardStrategy;
@property(retain, nonatomic) EcsRecommendFeedsStrategy *recFeedsStrategy; // @dynamic recFeedsStrategy;
@property(retain, nonatomic) EcsRemainActicleStrategy *remainActicleStrategy; // @dynamic remainActicleStrategy;
@property(retain, nonatomic) EcsStrategyControlInfo *strategyControlInfo; // @dynamic strategyControlInfo;

@end

