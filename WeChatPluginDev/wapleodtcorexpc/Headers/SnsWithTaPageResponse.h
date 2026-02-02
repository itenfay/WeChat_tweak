//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface SnsWithTaPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int hasMore; // @dynamic hasMore;
@property(nonatomic) unsigned long long maxFeedId; // @dynamic maxFeedId;
@property(nonatomic) unsigned long long minFeedId; // @dynamic minFeedId;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;

@end

