//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIWindow, NSString, SightIconView, SightView, UIImageView;

@interface WCCardVideoViewController
{
    SightView *_sightView;
    SightIconView *_iconView;
    UIImageView *_originImageView;
    MMUIWindow *_fullScreenWindow;
    NSString *_videoPath;
    CDUnknownBlockType _closeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) __weak MMUIWindow *fullScreenWindow; // @synthesize fullScreenWindow=_fullScreenWindow;
@property(retain, nonatomic) UIImageView *originImageView; // @synthesize originImageView=_originImageView;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SightView *sightView; // @synthesize sightView=_sightView;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)configCloseBlock:(CDUnknownBlockType)arg1;
- (void)tryToPlayWithVideoPath:(id)arg1;
- (void)clearSubviews;
- (void)onSavedVideoAlbum;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tapDidSelected;
- (void)longPressDidSelected;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

