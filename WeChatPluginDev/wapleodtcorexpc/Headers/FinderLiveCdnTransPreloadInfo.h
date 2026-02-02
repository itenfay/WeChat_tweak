//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveCdnTransPreloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int fileTotalBytes; // @dynamic fileTotalBytes;
@property(nonatomic) unsigned int preloadFileBytes; // @dynamic preloadFileBytes;
@property(nonatomic) unsigned int preloadFileDuration; // @dynamic preloadFileDuration;
@property(nonatomic) float preloadFileDurationPercent; // @dynamic preloadFileDurationPercent;
@property(nonatomic) float preloadFileSizePercent; // @dynamic preloadFileSizePercent;
@property(nonatomic) unsigned int preloadFileTotalDuration; // @dynamic preloadFileTotalDuration;
@property(nonatomic) unsigned long long preloadStartTime; // @dynamic preloadStartTime;
@property(retain, nonatomic) NSString *tagName; // @dynamic tagName;
@property(nonatomic) unsigned int videoQualityLevel; // @dynamic videoQualityLevel;

@end

