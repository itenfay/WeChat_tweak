//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface KSAudioQueueBuff : NSObject
{
    struct AudioQueueBuffer *_audioBuffer;
    unsigned int _bufferSize;
    struct AudioStreamPacketDescription _packetDes[16];
}

+ (unsigned int)packDesCnt;
@property(readonly, nonatomic) unsigned int bufSize; // @synthesize bufSize=_bufferSize;
@property(readonly, nonatomic) struct AudioQueueBuffer *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(readonly, nonatomic) struct AudioStreamPacketDescription *audioDes;
- (void)dispose:(struct OpaqueAudioQueue *)arg1;
- (void)dealloc;
- (id)initWithAudioBuf:(struct AudioQueueBuffer *)arg1 size:(unsigned int)arg2;

@end

