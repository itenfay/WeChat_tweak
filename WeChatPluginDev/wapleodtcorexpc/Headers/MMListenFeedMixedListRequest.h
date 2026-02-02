//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenAudioBaseRequest, MMListenDiscardInfo, MMListenRecommendInfo, NSData, NSMutableArray, NSString;

@interface MMListenFeedMixedListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest; // @dynamic audioBaseRequest;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo; // @dynamic ctxRecommendInfo;
@property(retain, nonatomic) MMListenDiscardInfo *discardInfo; // @dynamic discardInfo;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSData *syncSessionBuffer; // @dynamic syncSessionBuffer;
@property(retain, nonatomic) NSMutableArray *topListenCtx; // @dynamic topListenCtx;

@end

