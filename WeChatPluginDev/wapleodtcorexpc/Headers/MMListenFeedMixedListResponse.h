//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString;

@interface MMListenFeedMixedListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSString *hasMoreDesc; // @dynamic hasMoreDesc;
@property(nonatomic) _Bool needRefresh; // @dynamic needRefresh;
@property(retain, nonatomic) NSMutableArray *results; // @dynamic results;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;

@end

