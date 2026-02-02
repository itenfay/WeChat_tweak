//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveVideoAdInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bgImgUrl; // @dynamic bgImgUrl;
@property(nonatomic) unsigned long long endTimeMs; // @dynamic endTimeMs;
@property(retain, nonatomic) NSString *liveAdId; // @dynamic liveAdId;
@property(nonatomic) _Bool needPreload; // @dynamic needPreload;
@property(nonatomic) _Bool needWatchMultiEntranceAd; // @dynamic needWatchMultiEntranceAd;
@property(nonatomic) unsigned int preloadPercent; // @dynamic preloadPercent;
@property(retain, nonatomic) NSMutableArray *showTimeIntervals; // @dynamic showTimeIntervals;
@property(nonatomic) unsigned long long startTimeMs; // @dynamic startTimeMs;
@property(nonatomic) unsigned long long videoDurationMs; // @dynamic videoDurationMs;
@property(retain, nonatomic) NSString *videoUrl; // @dynamic videoUrl;

@end

