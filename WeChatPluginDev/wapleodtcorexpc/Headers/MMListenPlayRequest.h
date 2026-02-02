//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenItem, MMListenMusicInfo, MMListenTTSPlayCtx, NSString;

@interface MMListenPlayRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) MMListenItem *listenCtx; // @dynamic listenCtx;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) MMListenMusicInfo *musicCtx; // @dynamic musicCtx;
@property(nonatomic) _Bool needEncrypt; // @dynamic needEncrypt;
@property(nonatomic) _Bool needReplace; // @dynamic needReplace;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) MMListenTTSPlayCtx *ttsPlayCtx; // @dynamic ttsPlayCtx;

@end

