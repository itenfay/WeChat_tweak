//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenSyncItem, NSData, NSMutableArray;

@interface MMListenSyncResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MMListenSyncItem *musicDiscoverSyncItem; // @dynamic musicDiscoverSyncItem;
@property(retain, nonatomic) MMListenSyncItem *podcastDiscoverSyncItem; // @dynamic podcastDiscoverSyncItem;
@property(retain, nonatomic) NSMutableArray *syncCtxs; // @dynamic syncCtxs;
@property(retain, nonatomic) NSData *syncCtxsBuffer; // @dynamic syncCtxsBuffer;
@property(retain, nonatomic) MMListenSyncItem *syncItem; // @dynamic syncItem;
@property(retain, nonatomic) NSData *syncSessionBuffer; // @dynamic syncSessionBuffer;
@property(nonatomic) unsigned int syncTimeGap; // @dynamic syncTimeGap;

@end

