//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol VoIPAudioServiceExtension <NSObject>

@optional
- (void)VoIPAudioServiceDidPrewarmAudioUnit;
- (void)VoIPAudioServiceWillPrewarmAudioUnit;
- (void)voIPAudioServiceWillClose;
- (void)voIPAudioServiceDidReceiveAudioUnitRecordingCallbackFirst:(NSDictionary *)arg1;
- (void)voIPAudioServiceDidReceiveAudioUnitPlaybackCallbackFirst:(NSDictionary *)arg1;
- (void)voIPAudioServiceDidReceiveAudioUnitCallbackFirst;
- (void)voIPAudioServiceWillStartAudioUnitFirst;
- (void)voIPAudioServiceDidStartAudioUnit;
- (void)voIPAudioServiceWillStartAudioUnit;
- (void)voIPAudioServiceQuitCompulsivelyFromInterruption;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceInterruptionBegin;
@end

