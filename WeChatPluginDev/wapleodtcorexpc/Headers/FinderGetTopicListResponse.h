//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderPreloadInfo, FinderTopicInfo, NSData, NSMutableArray, PoiTopicSubTitle, RelatedTopic;

@interface FinderGetTopicListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int downContinueFlag; // @dynamic downContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(nonatomic) unsigned int recommendSimilarFlag; // @dynamic recommendSimilarFlag;
@property(retain, nonatomic) RelatedTopic *relatedTopic; // @dynamic relatedTopic;
@property(nonatomic) unsigned int reviseFeedCount; // @dynamic reviseFeedCount;
@property(retain, nonatomic) PoiTopicSubTitle *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) FinderTopicInfo *topic; // @dynamic topic;
@property(nonatomic) unsigned long long totalCount; // @dynamic totalCount;
@property(nonatomic) unsigned int upContinueFlag; // @dynamic upContinueFlag;

@end

