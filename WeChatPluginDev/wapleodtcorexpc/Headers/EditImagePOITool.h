//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCLocationInfo, WCTimelinePOIPickerViewController;

@interface EditImagePOITool
{
    WCLocationInfo *_locationInfo;
    NSString *_poiReportStr4Commit;
    UIView *_backgroundView;
    WCTimelinePOIPickerViewController *_poiPickerViewController;
    CDUnknownBlockType _hiddenStateChangeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hiddenStateChangeBlock; // @synthesize hiddenStateChangeBlock=_hiddenStateChangeBlock;
@property(retain, nonatomic) WCTimelinePOIPickerViewController *poiPickerViewController; // @synthesize poiPickerViewController=_poiPickerViewController;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *poiReportStr4Commit; // @synthesize poiReportStr4Commit=_poiReportStr4Commit;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
- (void)addShadow:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (id)exportAnimatedLayer;
- (void)setScreenCenter:(struct CGPoint)arg1;
- (_Bool)needHighQuality;
- (void)subclassReloadFrame;
- (void)subclassLargeTouchFrame;
- (double)widgetViewBorder;
- (double)widgetHeight;
- (double)widgetWidth;
- (_Bool)startEditingText;
- (double)maxFrameScaleWhileSelect;
- (double)maxScaleFactor;
- (double)originalScaleFactor;
- (void)onPOIReportStr4CommitChanged:(id)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

