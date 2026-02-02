//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface CameraScannerViewWrapper
{
    _Bool _isForbidOperate;
}

@property(nonatomic) _Bool isForbidOperate; // @synthesize isForbidOperate=_isForbidOperate;
- (void)stopCameraInstance;
- (void)startCameraInstance;
- (void)releaseCameraInstance;
- (void)setCameraInstanceDelegate:(id)arg1;

@end

