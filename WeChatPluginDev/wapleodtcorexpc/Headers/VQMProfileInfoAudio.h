//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface VQMProfileInfoAudio : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int countInterrpute; // @dynamic countInterrpute;
@property(nonatomic) int countStartUp; // @dynamic countStartUp;
@property(nonatomic) int countStartUpAtFristFailed; // @dynamic countStartUpAtFristFailed;
@property(nonatomic) int countStartUpFailed; // @dynamic countStartUpFailed;
@property(nonatomic) int deviceTypeStartupAtFirst; // @dynamic deviceTypeStartupAtFirst;
@property(nonatomic) int errorCodeStartUpFinalFailed; // @dynamic errorCodeStartUpFinalFailed;
@property(retain, nonatomic) NSString *portNameStartupAtFirst; // @dynamic portNameStartupAtFirst;
@property(nonatomic) unsigned long long timestampRecvAtFirst; // @dynamic timestampRecvAtFirst;
@property(nonatomic) unsigned long long timestampRecvPlaybackAtFirst; // @dynamic timestampRecvPlaybackAtFirst;
@property(nonatomic) unsigned long long timestampRecvRecordbackAtFirst; // @dynamic timestampRecvRecordbackAtFirst;
@property(nonatomic) unsigned long long timestampStartUpAtFrist; // @dynamic timestampStartUpAtFrist;
@property(nonatomic) unsigned long long timestampStartupMicAtFirst; // @dynamic timestampStartupMicAtFirst;
@property(nonatomic) unsigned long long timestampStartupPrewarnAudiounitAtFirst; // @dynamic timestampStartupPrewarnAudiounitAtFirst;
@property(nonatomic) unsigned long long timestampStartupSpeakerAtFirst; // @dynamic timestampStartupSpeakerAtFirst;
@property(nonatomic) unsigned long long timestampStartupSuccMicAtFirst; // @dynamic timestampStartupSuccMicAtFirst;
@property(nonatomic) unsigned long long timestampStartupSuccPrewarnAudiounitAtFirst; // @dynamic timestampStartupSuccPrewarnAudiounitAtFirst;
@property(nonatomic) unsigned long long timestampStartupSuccSpeakerAtFirst; // @dynamic timestampStartupSuccSpeakerAtFirst;

@end

