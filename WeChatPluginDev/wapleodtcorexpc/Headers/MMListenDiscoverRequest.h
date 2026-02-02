//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, ClientSessionInfo, MMListenAudioBaseRequest, MMListenDiscardInfo, MMListenDiscoverRequest_PoiInfo, MMListenMusicBaseRequest, MMListenPreloadArg, MMListenRecommendInfo, NSData, NSString;

@interface MMListenDiscoverRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest; // @dynamic audioBaseRequest;
@property(nonatomic) unsigned int audioStyle; // @dynamic audioStyle;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) ClientSessionInfo *clientSessionInfo; // @dynamic clientSessionInfo;
@property(retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo; // @dynamic ctxRecommendInfo;
@property(retain, nonatomic) MMListenDiscardInfo *discardInfo; // @dynamic discardInfo;
@property(retain, nonatomic) NSString *discoverId; // @dynamic discoverId;
@property(retain, nonatomic) NSString *discoverLineId; // @dynamic discoverLineId;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(nonatomic) int itemCount; // @dynamic itemCount;
@property(nonatomic) int lineCount; // @dynamic lineCount;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest; // @dynamic musicBaseRequest;
@property(nonatomic) _Bool noNeedListenItem; // @dynamic noNeedListenItem;
@property(retain, nonatomic) MMListenDiscoverRequest_PoiInfo *poiInfo; // @dynamic poiInfo;
@property(retain, nonatomic) MMListenPreloadArg *preloadArg; // @dynamic preloadArg;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSData *syncSessionBuffer; // @dynamic syncSessionBuffer;
@property(nonatomic) int version; // @dynamic version;

@end

