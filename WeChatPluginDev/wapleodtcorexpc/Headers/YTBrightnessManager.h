//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BrightnessDevice, NSTimer;
@protocol YTOnGetBrightness;

@interface YTBrightnessManager : NSObject
{
    void * vec;
    int _recordCount;
    id <YTOnGetBrightness> _onGetBrightnessDelegate;
    BrightnessDevice *_brightnessDevice;
    NSTimer *_timer;
}

+ (id)getUploadDic:(float)arg1;
@property(nonatomic) int recordCount; // @synthesize recordCount=_recordCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) BrightnessDevice *brightnessDevice; // @synthesize brightnessDevice=_brightnessDevice;
@property(nonatomic) __weak id <YTOnGetBrightness> onGetBrightnessDelegate; // @synthesize onGetBrightnessDelegate=_onGetBrightnessDelegate;
- (void)onGetBrightnessInner:(float)arg1;
- (void)stopBrightness;
- (int)getBrightness:(id)arg1 overTime:(double)arg2;

@end

