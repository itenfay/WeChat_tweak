//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenDiscardInfo, MMListenDiscoverLine, MMListenRecommendInfo, NSData, NSMutableArray, NSString;

@interface AudioMixReqInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo; // @dynamic ctxRecommendInfo;
@property(retain, nonatomic) MMListenDiscardInfo *discardInfo; // @dynamic discardInfo;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) MMListenDiscoverLine *line; // @dynamic line;
@property(nonatomic) int preloadMarkReason; // @dynamic preloadMarkReason;
@property(nonatomic) int reqAction; // @dynamic reqAction;
@property(nonatomic) int requestScene; // @dynamic requestScene;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSData *syncSessionBuffer; // @dynamic syncSessionBuffer;
@property(nonatomic) int tabIndex; // @dynamic tabIndex;
@property(retain, nonatomic) NSString *taskId; // @dynamic taskId;
@property(retain, nonatomic) NSMutableArray *topListenCtx; // @dynamic topListenCtx;

@end

