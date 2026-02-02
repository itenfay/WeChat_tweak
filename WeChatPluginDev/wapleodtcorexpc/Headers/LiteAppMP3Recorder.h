//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppMP3Recorder
{
    struct lame_global_struct *_lame;
}

@property(nonatomic) struct lame_global_struct *lame; // @synthesize lame=_lame;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)arg1 error:(id)arg2;
- (_Bool)checkErrorAndStopIfError:(int)arg1 withErrorString:(id)arg2;
- (_Bool)checkErrorAndLogIfError:(int)arg1 withErrorString:(id)arg2;
- (void)encodePCMBufferToOutputFormat:(struct LiteAppRecorderData *)arg1 audioQueueRef:(struct OpaqueAudioQueue *)arg2 audioQueueBufferRef:(struct AudioQueueBuffer *)arg3 audioTimeStamp:(const struct AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const struct AudioStreamPacketDescription *)arg6;
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

