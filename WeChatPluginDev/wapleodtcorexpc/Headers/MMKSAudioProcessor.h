//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKSAudioProcessor : NSObject
{
}

- (void)preparePCMOutPutWithMaxPacketSize:(unsigned int *)arg1 audioBufferCount:(unsigned int *)arg2;
- (void)dispose;
- (void)seek:(double)arg1;
- (void)processLPCM:(void *)arg1 len:(unsigned int *)arg2 maxLen:(unsigned int)arg3 ioNum:(unsigned int *)arg4;
- (_Bool)prepare:(struct AudioStreamBasicDescription *)arg1 err:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

