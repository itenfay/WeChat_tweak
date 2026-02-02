//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMVPlayer, MMMusicMVPreviewEpisodeSelectView, MMTimer, MMUIButton, NSString, UIButton, UILabel;

@interface MMMusicMVPreviewViewController
{
    _Bool _markedVideoOffsetDirty;
    MMMVPlayer *_mvPlayer;
    MMUIButton *_closeButton;
    UIButton *_commitButton;
    MMMusicMVPreviewEpisodeSelectView *_episodeSelectView;
    UILabel *_promptLabel;
    MMTimer *_musicMonitorTimer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool markedVideoOffsetDirty; // @synthesize markedVideoOffsetDirty=_markedVideoOffsetDirty;
@property(retain, nonatomic) MMTimer *musicMonitorTimer; // @synthesize musicMonitorTimer=_musicMonitorTimer;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) MMMusicMVPreviewEpisodeSelectView *episodeSelectView; // @synthesize episodeSelectView=_episodeSelectView;
@property(retain, nonatomic) UIButton *commitButton; // @synthesize commitButton=_commitButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMMVPlayer *mvPlayer; // @synthesize mvPlayer=_mvPlayer;
- (void)MVPlayer:(id)arg1 didUpdateEpisodeIndexFrom:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)episodeSelectViewDidSelectEpisodeAtIndex:(unsigned long long)arg1;
- (id)episodeSelectViewDataSource;
- (void)handleTappedCommitButton;
- (void)handleTappedCloseButton;
- (id)trackItems;
- (void)endPostingProgress;
- (void)startPostingProgress;
- (void)setupSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

