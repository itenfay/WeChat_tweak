//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJVoiceCloneIntroView, NSURL;

@protocol MJVoiceCloneIntroViewDelegate <NSObject>
- (void)voiceCloneIntroViewDidTapOnGoRecordingButton:(MJVoiceCloneIntroView *)arg1;
- (void)voiceCloneIntroView:(MJVoiceCloneIntroView *)arg1 didTapOnAgreementLink:(NSURL *)arg2;
- (void)voiceCloneIntroViewDidTapOnCloseButton:(MJVoiceCloneIntroView *)arg1;
@end

