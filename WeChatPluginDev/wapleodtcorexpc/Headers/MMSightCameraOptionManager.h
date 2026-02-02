//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMSightCameraAspectRatioOption, MMSightCameraBeautifyOption, MMSightCameraFilterOption, MMSightCameraFlashlightOption, MMSightCameraGridLineOption, MMSightCameraHDROption, MMSightCameraNightModeOption, MMSightCameraPortraitModeOption, MMSightCameraProModeOption, MMSightCameraTimerOption, MMSightCameraZoomerOption, NSMutableArray;
@protocol MMSightCameraOptionControllerProtocol;

@interface MMSightCameraOptionManager : NSObject
{
    MMSightCameraAspectRatioOption *_aspectRatioOption;
    MMSightCameraBeautifyOption *_beautifyOption;
    MMSightCameraFilterOption *_filterOption;
    MMSightCameraFlashlightOption *_flashlightOption;
    MMSightCameraGridLineOption *_gridLineOption;
    MMSightCameraHDROption *_hdrOption;
    MMSightCameraNightModeOption *_nightModeOption;
    MMSightCameraPortraitModeOption *_portraitModeOption;
    MMSightCameraProModeOption *_proModeOption;
    MMSightCameraTimerOption *_timerOption;
    MMSightCameraZoomerOption *_zoomerOption;
    id <MMSightCameraOptionControllerProtocol> _optionController;
    NSMutableArray *_allOptionList;
    struct CGRect _containerFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allOptionList; // @synthesize allOptionList=_allOptionList;
@property(nonatomic) __weak id <MMSightCameraOptionControllerProtocol> optionController; // @synthesize optionController=_optionController;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(retain, nonatomic) MMSightCameraZoomerOption *zoomerOption; // @synthesize zoomerOption=_zoomerOption;
@property(retain, nonatomic) MMSightCameraTimerOption *timerOption; // @synthesize timerOption=_timerOption;
@property(retain, nonatomic) MMSightCameraProModeOption *proModeOption; // @synthesize proModeOption=_proModeOption;
@property(retain, nonatomic) MMSightCameraPortraitModeOption *portraitModeOption; // @synthesize portraitModeOption=_portraitModeOption;
@property(retain, nonatomic) MMSightCameraNightModeOption *nightModeOption; // @synthesize nightModeOption=_nightModeOption;
@property(retain, nonatomic) MMSightCameraHDROption *hdrOption; // @synthesize hdrOption=_hdrOption;
@property(retain, nonatomic) MMSightCameraGridLineOption *gridLineOption; // @synthesize gridLineOption=_gridLineOption;
@property(retain, nonatomic) MMSightCameraFlashlightOption *flashlightOption; // @synthesize flashlightOption=_flashlightOption;
@property(retain, nonatomic) MMSightCameraFilterOption *filterOption; // @synthesize filterOption=_filterOption;
@property(retain, nonatomic) MMSightCameraBeautifyOption *beautifyOption; // @synthesize beautifyOption=_beautifyOption;
@property(retain, nonatomic) MMSightCameraAspectRatioOption *aspectRatioOption; // @synthesize aspectRatioOption=_aspectRatioOption;
- (void)_initProModeOption;
- (void)_initZoomerOption;
- (void)_initTimerOption;
- (void)_initGridLineOption;
- (void)_initAspectRatioOption;
- (void)_initBeautifyOption;
- (void)_initFilterOption;
- (void)_initHDROption;
- (void)_initPortraitModeOption;
- (void)_initNightModeOption;
- (void)_initFlashlightOptionWithLegacyStyle:(_Bool)arg1;
- (void)_initForProMode;
- (void)_iniFortDefaultMode;
- (void)updateOptionOrientation:(long long)arg1;
- (id)initWithContainerFrame:(struct CGRect)arg1 optionController:(id)arg2;

@end

