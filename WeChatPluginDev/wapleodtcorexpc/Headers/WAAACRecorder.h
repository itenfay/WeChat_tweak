//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableData, NSString;

@interface WAAACRecorder
{
    unsigned int _recordPacket;
    unsigned int _pcmBufferPacket;
    struct OpaqueAudioConverter *_encodeCoverter;
    struct OpaqueAudioFileID *_outputFileID;
    NSMutableData *_pcmDataBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *pcmDataBuffer; // @synthesize pcmDataBuffer=_pcmDataBuffer;
@property(nonatomic) unsigned int pcmBufferPacket; // @synthesize pcmBufferPacket=_pcmBufferPacket;
@property(nonatomic) unsigned int recordPacket; // @synthesize recordPacket=_recordPacket;
@property(nonatomic) struct OpaqueAudioFileID *outputFileID; // @synthesize outputFileID=_outputFileID;
@property(nonatomic) struct OpaqueAudioConverter *encodeCoverter; // @synthesize encodeCoverter=_encodeCoverter;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)arg1 error:(id)arg2;
- (_Bool)checkErrorAndStopIfError:(int)arg1 withErrorString:(id)arg2;
- (_Bool)checkErrorAndLogIfError:(int)arg1 withErrorString:(id)arg2;
- (_Bool)copyEncoderCookieToFile;
- (_Bool)configureAACConverter:(struct AudioStreamBasicDescription)arg1;
- (void)encodePCMBufferToOutputFormat:(struct WARecorderData *)arg1 audioQueueRef:(struct OpaqueAudioQueue *)arg2 audioQueueBufferRef:(struct AudioQueueBuffer *)arg3 audioTimeStamp:(const struct AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const struct AudioStreamPacketDescription *)arg6;
- (void)clearRecorderState;
- (void)prepareToRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

