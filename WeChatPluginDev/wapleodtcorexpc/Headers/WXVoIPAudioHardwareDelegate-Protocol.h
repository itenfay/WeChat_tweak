//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WXVoIPAudioHardwareDelegate <NSObject>
- (void)onHardwarePluggedOut:(const struct Hardware *)arg1;
- (void)onHardwarePluggedIn:(const struct Hardware *)arg1;
- (void)onChangePlayHardwareSuccessfully:(const struct Hardware *)arg1;
- (void)onChangeNewCaptureHardwareSuccessfully:(const struct Hardware *)arg1;
- (void)onAudioUnitError:(const void *)arg1;
- (void)onAudioUnitEvent:(const void *)arg1;
- (void)onGetDatatoPlay:(struct AudioFrame *)arg1;
- (void)onCaptureData:(struct AudioFrame *)arg1;
@end

