//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol ILinkAudioFrameDelegate <NSObject>

@optional
- (void)onMixedILinkLocalAudioData:(char *)arg1 dataLen:(int)arg2 channels:(int)arg3 sampleRate:(int)arg4;
@end

