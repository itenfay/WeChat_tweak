//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface SearchRecommendFlowResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSMutableArray *searchRecommendItemList; // @dynamic searchRecommendItemList;

@end

