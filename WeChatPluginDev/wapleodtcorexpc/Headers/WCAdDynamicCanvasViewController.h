//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdDynamicCanvasPageInfo, WCCanvasDynamicDataLoader, WCStatTimerHelper;
@protocol WCAdDynamicCanvasViewControllerDelegate;

@interface WCAdDynamicCanvasViewController
{
    _Bool _halfScreenReachedTopFlag;
    id <WCAdDynamicCanvasViewControllerDelegate> _delegate;
    WCAdDynamicCanvasPageInfo *_pageInfo;
    WCCanvasDynamicDataLoader *_dynamicLoader;
    WCStatTimerHelper *_exposureTimeHelper;
    unsigned long long _totalExposureTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalExposureTime; // @synthesize totalExposureTime=_totalExposureTime;
@property(retain, nonatomic) WCStatTimerHelper *exposureTimeHelper; // @synthesize exposureTimeHelper=_exposureTimeHelper;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dynamicLoader; // @synthesize dynamicLoader=_dynamicLoader;
@property(nonatomic) _Bool halfScreenReachedTopFlag; // @synthesize halfScreenReachedTopFlag=_halfScreenReachedTopFlag;
@property(retain, nonatomic) WCAdDynamicCanvasPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) __weak id <WCAdDynamicCanvasViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onKeyboardDidChangeFrame:(id)arg1;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)publishEvent:(id)arg1 params:(id)arg2;
- (void)publishEventToPage:(id)arg1 event:(id)arg2 params:(id)arg3;
- (void)onUpdateCanvasStateResult:(_Bool)arg1 cleanLocalCache:(unsigned int)arg2;
- (void)onUpdateSharedUxinfo:(id)arg1;
- (_Bool)isCanvasInHalfScreenMode;
- (_Bool)checkNeedUpdateUxInfo:(long long)arg1;
- (void)tryToUpdateCanvasAuth;
- (void)tryToUpdateUxInfo;
- (void)dealloc;
- (void)jumpToCanvasInHalfScreen:(id)arg1 uxInfo:(id)arg2 canvasDynamicInfo:(id)arg3 noStore:(_Bool)arg4;
- (void)jumpToWeAppInHalfScreen:(id)arg1 sceneNote:(id)arg2;
- (void)jumpToH5InHalfScreen:(id)arg1 extraInfo:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

