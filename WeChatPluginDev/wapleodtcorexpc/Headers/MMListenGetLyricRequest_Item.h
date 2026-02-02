//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenRecommendInfo, NSString;

@interface MMListenGetLyricRequest_Item : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo; // @dynamic ctxRecommendInfo;
@property(nonatomic) _Bool forceFullVersion; // @dynamic forceFullVersion;
@property(nonatomic) _Bool getLyric; // @dynamic getLyric;
@property(nonatomic) _Bool getTts; // @dynamic getTts;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

