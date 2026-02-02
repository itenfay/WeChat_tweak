//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol KSAudioProcessorProtocol <NSObject>
- (void)dispose;
- (void)seek:(double)arg1;
- (void)processLPCM:(void *)arg1 len:(unsigned int *)arg2 maxLen:(unsigned int)arg3 ioNum:(unsigned int *)arg4;
- (_Bool)prepare:(struct AudioStreamBasicDescription *)arg1 err:(id *)arg2;

@optional
- (struct AudioTimeStamp *)syncStartTimeStamp;
- (void)translateCurTimeToProcessedTime:(double *)arg1;
- (void)getProcessedLPCM:(void *)arg1 maxLen:(unsigned int)arg2 ioNum:(unsigned int *)arg3;
- (void)currentPlayPCMData:(void *)arg1 len:(unsigned int)arg2;
- (void)preparePCMOutPutWithMaxPacketSize:(unsigned int *)arg1 audioBufferCount:(unsigned int *)arg2;
@end

