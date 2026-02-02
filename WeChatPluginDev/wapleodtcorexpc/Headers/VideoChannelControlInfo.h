//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class VideoChannelTimelineInfo, VideoChannelTopBarInfo;

@interface VideoChannelControlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int switchOption; // @dynamic switchOption;
@property(retain, nonatomic) VideoChannelTimelineInfo *timelineNotifyInfo; // @dynamic timelineNotifyInfo;
@property(retain, nonatomic) VideoChannelTopBarInfo *topBarInfo; // @dynamic topBarInfo;

@end

