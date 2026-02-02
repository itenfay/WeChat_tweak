//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveReplayTransitionInfo, FinderLiveReplayTransitionPreloadInfo, NSMutableArray, NSString;

@interface FinderLiveReplayInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *anchorSpecified; // @dynamic anchorSpecified;
@property(retain, nonatomic) NSString *hlsEncToken; // @dynamic hlsEncToken;
@property(retain, nonatomic) NSString *hlsEncUrl; // @dynamic hlsEncUrl;
@property(nonatomic) unsigned int isLiveShowMemberReplaySwitch; // @dynamic isLiveShowMemberReplaySwitch;
@property(nonatomic) unsigned int origDuration; // @dynamic origDuration;
@property(nonatomic) unsigned long long refReplayObjectId; // @dynamic refReplayObjectId;
@property(nonatomic) unsigned long long replayControlFlag; // @dynamic replayControlFlag;
@property(retain, nonatomic) NSString *replayGuidePageUrl; // @dynamic replayGuidePageUrl;
@property(nonatomic) unsigned int replaySwitchStatus; // @dynamic replaySwitchStatus;
@property(retain, nonatomic) FinderLiveReplayTransitionPreloadInfo *replayTransitionPreloadInfo; // @dynamic replayTransitionPreloadInfo;
@property(retain, nonatomic) FinderLiveReplayTransitionInfo *replayTransitionVideoInfo; // @dynamic replayTransitionVideoInfo;
@property(nonatomic) unsigned int supportScreenRotate; // @dynamic supportScreenRotate;
@property(nonatomic) unsigned long long watchUv; // @dynamic watchUv;

@end

