//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenAudioBaseRequest, MMListenDiscardInfo, MMListenFeedIdListRequest_LoadItemRequest, MMListenMusicBaseRequest, MMListenRecommendInfo, NSData, NSMutableArray, NSString;

@interface MMListenFeedIdListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest; // @dynamic audioBaseRequest;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) int count; // @dynamic count;
@property(retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo; // @dynamic ctxRecommendInfo;
@property(retain, nonatomic) MMListenDiscardInfo *discardInfo; // @dynamic discardInfo;
@property(retain, nonatomic) NSMutableArray *filterListenCtx; // @dynamic filterListenCtx;
@property(nonatomic) int idlistOrder; // @dynamic idlistOrder;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(nonatomic) int listOrderType; // @dynamic listOrderType;
@property(nonatomic) _Bool loadItem; // @dynamic loadItem;
@property(retain, nonatomic) MMListenFeedIdListRequest_LoadItemRequest *loadItemRequest; // @dynamic loadItemRequest;
@property(nonatomic) unsigned int loadListScene; // @dynamic loadListScene;
@property(nonatomic) _Bool loadSimplePlayableInfo; // @dynamic loadSimplePlayableInfo;
@property(retain, nonatomic) NSString *mpAlbumId; // @dynamic mpAlbumId;
@property(retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest; // @dynamic musicBaseRequest;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSMutableArray *topListenCtx; // @dynamic topListenCtx;
@property(retain, nonatomic) NSMutableArray *topListenIds; // @dynamic topListenIds;

@end

