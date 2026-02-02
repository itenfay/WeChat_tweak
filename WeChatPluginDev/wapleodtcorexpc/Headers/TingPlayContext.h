//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, TingDownloadInfo;

@interface TingPlayContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TingDownloadInfo *downloadInfo; // @dynamic downloadInfo;
@property(nonatomic) int endTime; // @dynamic endTime;
@property(nonatomic) _Bool holdLastPlayerCore; // @dynamic holdLastPlayerCore;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(nonatomic) int localVoiceDefaultVolume; // @dynamic localVoiceDefaultVolume;
@property(nonatomic) int localVoiceEndTime; // @dynamic localVoiceEndTime;
@property(retain, nonatomic) NSString *localVoicePath; // @dynamic localVoicePath;
@property(nonatomic) float playRate; // @dynamic playRate;
@property(nonatomic) long long playStartTimeTs; // @dynamic playStartTimeTs;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(nonatomic) int startTime; // @dynamic startTime;

@end

