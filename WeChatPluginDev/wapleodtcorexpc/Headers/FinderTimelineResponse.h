//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface FinderTimelineResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long algoRecommendDisplayid; // @dynamic algoRecommendDisplayid;
@property(retain, nonatomic) NSMutableArray *algoRecommendObject; // @dynamic algoRecommendObject;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;

@end

