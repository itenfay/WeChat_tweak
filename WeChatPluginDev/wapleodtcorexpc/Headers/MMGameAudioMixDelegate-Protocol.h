//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableData;

@protocol MMGameAudioMixDelegate <NSObject>

@optional
- (void)onMixData:(NSMutableData *)arg1 format:(long long)arg2 samplerate:(int)arg3 channel:(int)arg4;
@end

