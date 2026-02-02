//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@interface ConfDeviceReport : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int audioDeviceErrcode; // @dynamic audioDeviceErrcode;
@property(nonatomic) unsigned long long audioDeviceSuccStartTimestamp; // @dynamic audioDeviceSuccStartTimestamp;
@property(nonatomic) int audioIosMicAbnormal; // @dynamic audioIosMicAbnormal;
@property(nonatomic) int audioPlayCallnum; // @dynamic audioPlayCallnum;
@property(nonatomic) unsigned int audioPlayerErrcode; // @dynamic audioPlayerErrcode;
@property(nonatomic) int audioRecordReadnum; // @dynamic audioRecordReadnum;
@property(nonatomic) unsigned int audioRecorderErrcode; // @dynamic audioRecorderErrcode;
@property(nonatomic) unsigned int audioSetmodeErrcode; // @dynamic audioSetmodeErrcode;
@property(nonatomic) unsigned int audioSourceMode; // @dynamic audioSourceMode;
@property(nonatomic) long long beginInterruptTimestamp; // @dynamic beginInterruptTimestamp;
@property(nonatomic) long long endInterruptTimestamp; // @dynamic endInterruptTimestamp;
@property(nonatomic) unsigned long long firstDecodeAudioPktTimestamp; // @dynamic firstDecodeAudioPktTimestamp;
@property(nonatomic) unsigned long long firstPlayTimestamp; // @dynamic firstPlayTimestamp;
@property(nonatomic) unsigned long long firstRecordTimestamp; // @dynamic firstRecordTimestamp;
@property(nonatomic) int interruptCnt; // @dynamic interruptCnt;
@property(nonatomic) unsigned int localPictureFreezeCnt; // @dynamic localPictureFreezeCnt;
@property(nonatomic) unsigned int phoneMode; // @dynamic phoneMode;
@property(nonatomic) unsigned int phoneStreamType; // @dynamic phoneStreamType;
@property(nonatomic) int playVolume; // @dynamic playVolume;
@property(nonatomic) unsigned int remotePictureFreezeCnt; // @dynamic remotePictureFreezeCnt;
@property(nonatomic) unsigned int ringPlayerErrcode; // @dynamic ringPlayerErrcode;
@property(nonatomic) unsigned int speakerMode; // @dynamic speakerMode;
@property(nonatomic) unsigned int speakerStreamType; // @dynamic speakerStreamType;
@property(nonatomic) unsigned int startAudioSourceMode; // @dynamic startAudioSourceMode;
@property(nonatomic) unsigned int startPhoneMode; // @dynamic startPhoneMode;
@property(nonatomic) unsigned int startPhoneStreamType; // @dynamic startPhoneStreamType;
@property(nonatomic) unsigned int startSpeakerMode; // @dynamic startSpeakerMode;
@property(nonatomic) unsigned int startSpeakerStreamType; // @dynamic startSpeakerStreamType;
@property(nonatomic) unsigned long long talkViewStartTimestamp; // @dynamic talkViewStartTimestamp;
@property(nonatomic) unsigned int videoDeviceErrcode; // @dynamic videoDeviceErrcode;

@end

