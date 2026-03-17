//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveReplayTransitionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *cdnTransInfo; // @dynamic cdnTransInfo;
@property(nonatomic) unsigned int disableReplayTransition; // @dynamic disableReplayTransition;
@property(nonatomic) unsigned int forceRecommend; // @dynamic forceRecommend;
@property(nonatomic) unsigned int recommendVideoQualityLevel; // @dynamic recommendVideoQualityLevel;
@property(retain, nonatomic) NSString *replayTransitionUrl; // @dynamic replayTransitionUrl;
@property(nonatomic) unsigned long long replayTransitionVideoId; // @dynamic replayTransitionVideoId;

@end

