//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCanvasComponent, WCCanvasComponentItem;

@interface WCCanvasRandomLayout
{
    WCCanvasComponentItem *_theChosenItem;
    WCCanvasComponent *_theChosenComponent;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponent *theChosenComponent; // @synthesize theChosenComponent=_theChosenComponent;
@property(retain, nonatomic) WCCanvasComponentItem *theChosenItem; // @synthesize theChosenItem=_theChosenItem;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (_Bool)encoreShakeShouldForbidShakeSpecialView;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)componentReportAddExposureCount;
- (void)componentWillStopState:(_Bool)arg1;
- (void)canvasCloseBtnClick;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;

@end

