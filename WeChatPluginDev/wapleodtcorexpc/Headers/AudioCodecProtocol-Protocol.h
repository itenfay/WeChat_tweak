//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAudioFormat, NSData;

@protocol AudioCodecProtocol <NSObject>
- (AVAudioFormat *)format;
- (void)getDecodeData:(void *)arg1 playedFrames:(unsigned int)arg2 frames:(unsigned int *)arg3;
- (void)getDecodeData:(void *)arg1 time:(unsigned int)arg2 frames:(unsigned int *)arg3;
- (void)setDataForDecode:(NSData *)arg1 decodeNow:(_Bool)arg2;
@end

