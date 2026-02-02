//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WXVoIPAudioHardwareDelegate;

@interface WXVoIPAudioHardwareCallbackAdapter : NSObject
{
    struct unique_ptr<wxvoipsdk::audio::HardwareCallbackImpl, std::default_delete<wxvoipsdk::audio::HardwareCallbackImpl>> _callbackImpl;
    id <WXVoIPAudioHardwareDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WXVoIPAudioHardwareDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyHardwarePluggedOut:(const struct Hardware *)arg1;
- (void)notifyHardwarePluggedIn:(const struct Hardware *)arg1;
- (void)notifyInUsePlayHardwareChangedSuccessfully:(const struct Hardware *)arg1;
- (void)notifyInUseCaptureHardwareChangedSuccessfully:(const struct Hardware *)arg1;
- (void)notifyAudioUnitError:(const void *)arg1;
- (void)notifyAudioUnitEvent:(const void *)arg1;
- (void)getDataToPlay:(struct AudioFrame *)arg1;
- (void)capturePortprocess:(struct AudioFrame *)arg1;
- (struct HardwareManagerEventCallback *)getEventCallback;
- (struct AudioUnitPlayDataCallback *)getPlayDataCallback;
- (struct AudioUnitCaptureDataCallback *)getCaptureDataCallback;
- (id)init:(id)arg1;

@end

