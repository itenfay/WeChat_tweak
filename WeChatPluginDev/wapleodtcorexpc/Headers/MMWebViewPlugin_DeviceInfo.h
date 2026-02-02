//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMWebViewPlugin_DeviceInfo
{
    _Bool _bKeepScreenOn;
    int _setFlag;
    long long _orientationBeforeSet;
    long long _orientationSet;
}

@property(nonatomic) _Bool bKeepScreenOn; // @synthesize bKeepScreenOn=_bKeepScreenOn;
@property(nonatomic) int setFlag; // @synthesize setFlag=_setFlag;
@property(nonatomic) long long orientationSet; // @synthesize orientationSet=_orientationSet;
@property(nonatomic) long long orientationBeforeSet; // @synthesize orientationBeforeSet=_orientationBeforeSet;
- (void)sendNetworkTypeChangeEvent;
- (void)MobileSIMTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)handleClosePage:(id)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)setKeepScreenOn:(_Bool)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (_Bool)setToOrientation:(long long)arg1;
- (id)init;

@end

