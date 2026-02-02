//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPThumbPlayerWrapper;

@protocol TPThumbPlayerDemuxerCallback <NSObject>

@optional
- (void)onDemuxerPauseContinueBufferingCompleted;
- (struct TPRtcRemoteSdpInfo)onSdpExchange:(TPThumbPlayerWrapper *)arg1 localSdp:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2 ids:(int)arg3;
@end

