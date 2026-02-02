//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MagicSclFrameSetView, NSString, WAGameCircleProgressLoadingViewController;

@interface MagicGameLoadingViewController
{
    WAGameCircleProgressLoadingViewController *_circleProgressVC;
    MagicSclFrameSetView *_frameSetView;
    MMUIButton *_startToPlayBtn;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) MMUIButton *startToPlayBtn; // @synthesize startToPlayBtn=_startToPlayBtn;
@property(retain, nonatomic) MagicSclFrameSetView *frameSetView; // @synthesize frameSetView=_frameSetView;
@property(retain, nonatomic) WAGameCircleProgressLoadingViewController *circleProgressVC; // @synthesize circleProgressVC=_circleProgressVC;
- (void)dealloc;
- (void)onRotationStart;
- (void)onRotationDone;
- (void)onFullScreenDone;
- (void)onFullScreenStart;
- (void)onHalfScreenDone;
- (void)onHalfScreenStart;
- (void)onAppPrepared;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)layoutStartToPlayBtn;
- (void)initStartToPlayBtn;
- (void)viewDidLoad;
- (id)biz;
- (void)hideLoadingAll;
- (void)requestFullScreen;
- (void)hideDefaultLoading;
- (id)initWithContact:(id)arg1 pkgConfig:(id)arg2 extraData:(id)arg3;

@end

