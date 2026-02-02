//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCNormalVideoPlayerView;

@interface WCNormalVideoPlayerViewController
{
    WCNormalVideoPlayerView *_videoPlayer;
    NSString *_videoUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) WCNormalVideoPlayerView *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)onGetViewWidthAndHeight:(double *)arg1 leftPartWidth:(double *)arg2;
- (void)onCloseButtonClicked;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)hidesStatusbar;
- (id)initWithVideoUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

