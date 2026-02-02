//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol MJVoiceInputRecorderDelegate <NSObject>
- (void)onAudioBufferRecordEnd;
- (void)onAudioBufferOutput:(NSData *)arg1;
- (void)onLevelMeterPeakChange:(float)arg1;
@end

