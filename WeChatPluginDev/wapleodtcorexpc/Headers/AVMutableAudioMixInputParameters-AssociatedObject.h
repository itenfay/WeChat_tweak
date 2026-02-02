//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <AVFoundation/AVMutableAudioMixInputParameters.h>

@class TAVAudioProcessingTapHolder;

@interface AVMutableAudioMixInputParameters (AssociatedObject)
- (void)appendAudioProcessNodes:(id)arg1;
- (void)appendAudioProcessNode:(id)arg1;
@property(retain, nonatomic) TAVAudioProcessingTapHolder *audioProcessingTapHolder; // @dynamic audioProcessingTapHolder;
@end

