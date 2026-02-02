//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenRecommendInfo, NSData, NSMutableArray, NSString;

@interface MMListenFeedIdListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) unsigned long long expireTimeS; // @dynamic expireTimeS;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) _Bool needRefresh; // @dynamic needRefresh;
@property(nonatomic) _Bool needReplaceCtxRecommendInfo; // @dynamic needReplaceCtxRecommendInfo;
@property(retain, nonatomic) MMListenRecommendInfo *replaceRecommendInfo; // @dynamic replaceRecommendInfo;
@property(retain, nonatomic) NSMutableArray *results; // @dynamic results;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *updateMd5; // @dynamic updateMd5;
@property(nonatomic) _Bool upwardsHasMore; // @dynamic upwardsHasMore;

@end

