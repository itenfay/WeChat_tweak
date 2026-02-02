//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenItem, MMListenMusicInfo, MMListenRecommendInfo, NSMutableArray, NSString;

@interface MMListenItemRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *ctxCategoryId; // @dynamic ctxCategoryId;
@property(retain, nonatomic) MMListenRecommendInfo *ctxCategoryRecommendInfo; // @dynamic ctxCategoryRecommendInfo;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) MMListenItem *listenCtx; // @dynamic listenCtx;
@property(retain, nonatomic) NSMutableArray *listenIds; // @dynamic listenIds;
@property(retain, nonatomic) MMListenMusicInfo *musicCtx; // @dynamic musicCtx;
@property(nonatomic) int reqScene; // @dynamic reqScene;
@property(nonatomic) int reqType; // @dynamic reqType;
@property(nonatomic) int scene; // @dynamic scene;

@end

