//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureDevice;
@protocol MotionDetectorDelegate;

@interface MotionDetector
{
    id <MotionDetectorDelegate> _delegate;
    _Bool _isInit;
    _Bool _isFocusLibInit;
    AVCaptureDevice *_defaultCaptureDevice;
    _Bool _focuseEngineRet[2];
    int _state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak id <MotionDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stop;
- (void)start;
- (int)releaseFocuseEngine;
- (void)focuseEngineProcess:(char *)arg1;
- (int)initFocuseEngineWithSize:(struct CGSize)arg1 isForOcr:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

