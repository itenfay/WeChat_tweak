//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface WCCanvasLinearLayout
{
    _Bool _needRelayout;
    NSMutableDictionary *_viewContainer;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool needRelayout; // @synthesize needRelayout=_needRelayout;
@property(retain, nonatomic) NSMutableDictionary *viewContainer; // @synthesize viewContainer=_viewContainer;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (id)randomPickFetchRandomPickCardComponent;
- (_Bool)encoreShakeShouldForbidShakeSpecialView;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)componentReportAddExposureCount;
- (void)canvasCloseBtnClick;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;

@end

