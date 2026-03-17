//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class VoicePrintRecordButton;

@protocol VoicePrintRecordButtonDelegate <NSObject>
- (void)onVoiceRecordButtonTouchUp:(VoicePrintRecordButton *)arg1;
- (void)onVoiceRecordButtonTouchDown:(VoicePrintRecordButton *)arg1;
@end

