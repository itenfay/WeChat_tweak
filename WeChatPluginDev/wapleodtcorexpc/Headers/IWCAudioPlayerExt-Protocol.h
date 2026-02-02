//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, WCAudioInfo, WCAudioPlayer;

@protocol IWCAudioPlayerExt <NSObject>

@optional
- (void)wcAudioPlayer:(WCAudioPlayer *)arg1 currentTime:(double)arg2 displayTime:(double)arg3 duration:(double)arg4;
- (void)wcAudioPlayer:(WCAudioPlayer *)arg1 onEvent:(unsigned long long)arg2 audioInfo:(WCAudioInfo *)arg3 error:(NSError *)arg4;
- (void)wcAudioPlayer:(WCAudioPlayer *)arg1 statusChanged:(unsigned long long)arg2 audioInfo:(WCAudioInfo *)arg3;
@end

