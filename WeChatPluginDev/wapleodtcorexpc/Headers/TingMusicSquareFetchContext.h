//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenDiscoverResponse, NSString, TingMusicSquareLoadWholeProcessLogInfo;

@interface TingMusicSquareFetchContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool didApplyReddotPrelaod; // @dynamic didApplyReddotPrelaod;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) NSString *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) TingMusicSquareLoadWholeProcessLogInfo *logInfo; // @dynamic logInfo;
@property(nonatomic) _Bool mergeItemRequest; // @dynamic mergeItemRequest;
@property(nonatomic) _Bool onlyRefreshPreload; // @dynamic onlyRefreshPreload;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(nonatomic) _Bool readCompleteCache; // @dynamic readCompleteCache;
@property(nonatomic) int reason; // @dynamic reason;
@property(retain, nonatomic) NSString *redDotTipsId; // @dynamic redDotTipsId;
@property(nonatomic) unsigned int reqSeq; // @dynamic reqSeq;
@property(nonatomic) unsigned int requestCount; // @dynamic requestCount;
@property(retain, nonatomic) MMListenDiscoverResponse *requestingResponse; // @dynamic requestingResponse;
@property(retain, nonatomic) NSString *sessionBufffer; // @dynamic sessionBufffer;
@property(nonatomic) unsigned long long startTimestamp; // @dynamic startTimestamp;

@end

