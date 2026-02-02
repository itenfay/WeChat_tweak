//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenIdListRequest_LoadItemRequest, MMListenRecommendInfo, NSString;

@interface MMListenIdListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo; // @dynamic ctxRecommendInfo;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(nonatomic) int listOrder; // @dynamic listOrder;
@property(nonatomic) _Bool loadItem; // @dynamic loadItem;
@property(retain, nonatomic) MMListenIdListRequest_LoadItemRequest *loadItemRequest; // @dynamic loadItemRequest;
@property(nonatomic) unsigned int loadListScene; // @dynamic loadListScene;
@property(retain, nonatomic) NSString *mpAlbumId; // @dynamic mpAlbumId;
@property(nonatomic) int reqType; // @dynamic reqType;

@end

