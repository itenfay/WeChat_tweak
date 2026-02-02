//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MJAnalyticsPreviewMusicAction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long previewDurationMs; // @dynamic previewDurationMs;
@property(retain, nonatomic) NSString *previewMusicId; // @dynamic previewMusicId;
@property(retain, nonatomic) NSString *previewMusicSongName; // @dynamic previewMusicSongName;
@property(nonatomic) int previewMusicSourceType; // @dynamic previewMusicSourceType;
@property(nonatomic) unsigned long long timelineDurationMs; // @dynamic timelineDurationMs;

@end

