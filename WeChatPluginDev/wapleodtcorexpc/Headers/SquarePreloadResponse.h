//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenFeedMixedListResponse, NSString, SquarePreloadInfo;

@interface SquarePreloadResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenFeedMixedListResponse *mixedListResponse; // @dynamic mixedListResponse;
@property(retain, nonatomic) SquarePreloadInfo *prealodInfo; // @dynamic prealodInfo;
@property(nonatomic) long long timestampSecond; // @dynamic timestampSecond;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

