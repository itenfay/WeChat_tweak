//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol wxAudioOutputDelegate <NSObject>
- (void)onPcmOutputSessionId:(NSString *)arg1 data:(char *)arg2 size:(unsigned int)arg3 channels:(unsigned int)arg4 samplerate:(unsigned int)arg5 fmt:(int)arg6;
@end

