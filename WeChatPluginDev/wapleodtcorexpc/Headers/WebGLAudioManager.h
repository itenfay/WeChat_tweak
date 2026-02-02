//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebGLAudioManager : NSObject
{
    CDUnknownBlockType audioDataBlock;
    int audioSampleRate;
    int audioChannels;
    unsigned long long _frameNum;
    unsigned long long _timeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) unsigned long long frameNum; // @synthesize frameNum=_frameNum;
- (void)onAudioInfoChanged:(int)arg1 channels:(int)arg2;
- (void)onPcmDataAvailable:(id)arg1 pts:(unsigned long long)arg2;
- (void)setBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

