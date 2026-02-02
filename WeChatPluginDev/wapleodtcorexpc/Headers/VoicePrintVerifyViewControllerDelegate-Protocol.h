//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol VoicePrintVerifyViewControllerDelegate <NSObject>
- (void)onAudioNotActiveOrInterrupted;
- (void)onMicrophonePermissionDenied;
- (void)onVerifyClose;
- (void)onVerifyEnded;
- (void)onVerifyStarted;
@end

