//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UISlider;

@interface WebviewJSEventHandler_handleDeviceInfo
{
    UISlider *m_volumeViewSlider;
}

- (void).cxx_destruct;
- (_Bool)needPassPramsWithAction:(id)arg1;
- (void)setFullScreenLayout:(id)arg1 errMsg:(id *)arg2;
- (void)setKeepScreenOn:(id)arg1 errMsg:(id *)arg2;
- (id)volumeViewSlider;
- (id)getUIParams:(id)arg1 errMsg:(id *)arg2;
- (id)getScreenBrightness:(id)arg1 errMsg:(id *)arg2;
- (void)setScreenBrightness:(id)arg1 errMsg:(id *)arg2;
- (id)getVolume:(id)arg1 errMsg:(id *)arg2;
- (void)setVolume:(id)arg1 errMsg:(id *)arg2;
- (void)setOrientation:(id)arg1 errMsg:(id *)arg2;
- (void)setDisableInteractivePop:(id)arg1 errMsg:(id *)arg2;
- (void)enableFullScreen:(id)arg1 errMsg:(id *)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

