//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenPreloadArg, NSMutableArray;

@interface MMListenDiscoverItemRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *ctxs; // @dynamic ctxs;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) MMListenPreloadArg *preloadArg; // @dynamic preloadArg;

@end

