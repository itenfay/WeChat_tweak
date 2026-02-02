//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "AudioCodecProtocol-Protocol.h"

@class NSData;

@protocol StreamAudioCodecProtocol <AudioCodecProtocol>
- (void)appendData:(NSData *)arg1 decodeNow:(_Bool)arg2 lastSlice:(_Bool)arg3;
@end

