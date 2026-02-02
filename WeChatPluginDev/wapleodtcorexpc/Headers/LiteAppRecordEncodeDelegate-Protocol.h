//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol LiteAppRecordEncodeDelegate <NSObject>
- (void)encodePCMBufferToOutputFormat:(struct LiteAppRecorderData *)arg1 audioQueueRef:(struct OpaqueAudioQueue *)arg2 audioQueueBufferRef:(struct AudioQueueBuffer *)arg3 audioTimeStamp:(const struct AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const struct AudioStreamPacketDescription *)arg6;
@end

