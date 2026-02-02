//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMTimer, MMUIButton, MMUILabel, MMWebImageView, NSArray, NSString, ShakeMusicInfo, UIImageView, UIView;

@interface ShakeMusicResultNoPermViewController
{
    _Bool _shouldUseCustomPopAnimation;
    _Bool _shouldLayoutHeaderView;
    _Bool _lyricLocatingWithAnim;
    _Bool _isScrollingLyrics;
    CDUnknownBlockType _onPopBlock;
    unsigned long long _openScene;
    MMWebImageView *_musicCoverBgImageView;
    MMUIButton *_closeButton;
    MMUILabel *_recognitionResultLabel;
    UIView *_tableHeaderView;
    MMWebImageView *_musicCoverImageView;
    MMUILabel *_musicSongNameLabel;
    MMUILabel *_musicSingerNameLabel;
    MMTableView *_lyricsTableView;
    MMUILabel *_lyricsTableViewEmptyLabel;
    UIView *_blackLineView;
    MMUILabel *_copyrightInfoLabel;
    UIImageView *_copyrightInfoIconView;
    MMTableView *_musicTableView;
    ShakeMusicInfo *_shakeMusicInfo;
    NSArray *_musicInfoArr;
    NSArray *_lyricsArr;
    NSArray *_lyricsTimeArr;
    MMTimer *_lyricsTimer;
    double _lyricsTimeInterval;
    long long _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isScrollingLyrics; // @synthesize isScrollingLyrics=_isScrollingLyrics;
@property(nonatomic) _Bool lyricLocatingWithAnim; // @synthesize lyricLocatingWithAnim=_lyricLocatingWithAnim;
@property(nonatomic) _Bool shouldLayoutHeaderView; // @synthesize shouldLayoutHeaderView=_shouldLayoutHeaderView;
@property(nonatomic) _Bool shouldUseCustomPopAnimation; // @synthesize shouldUseCustomPopAnimation=_shouldUseCustomPopAnimation;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) double lyricsTimeInterval; // @synthesize lyricsTimeInterval=_lyricsTimeInterval;
@property(retain, nonatomic) MMTimer *lyricsTimer; // @synthesize lyricsTimer=_lyricsTimer;
@property(retain, nonatomic) NSArray *lyricsTimeArr; // @synthesize lyricsTimeArr=_lyricsTimeArr;
@property(retain, nonatomic) NSArray *lyricsArr; // @synthesize lyricsArr=_lyricsArr;
@property(retain, nonatomic) NSArray *musicInfoArr; // @synthesize musicInfoArr=_musicInfoArr;
@property(retain, nonatomic) ShakeMusicInfo *shakeMusicInfo; // @synthesize shakeMusicInfo=_shakeMusicInfo;
@property(retain, nonatomic) MMTableView *musicTableView; // @synthesize musicTableView=_musicTableView;
@property(retain, nonatomic) UIImageView *copyrightInfoIconView; // @synthesize copyrightInfoIconView=_copyrightInfoIconView;
@property(retain, nonatomic) MMUILabel *copyrightInfoLabel; // @synthesize copyrightInfoLabel=_copyrightInfoLabel;
@property(retain, nonatomic) UIView *blackLineView; // @synthesize blackLineView=_blackLineView;
@property(retain, nonatomic) MMUILabel *lyricsTableViewEmptyLabel; // @synthesize lyricsTableViewEmptyLabel=_lyricsTableViewEmptyLabel;
@property(retain, nonatomic) MMTableView *lyricsTableView; // @synthesize lyricsTableView=_lyricsTableView;
@property(retain, nonatomic) MMUILabel *musicSingerNameLabel; // @synthesize musicSingerNameLabel=_musicSingerNameLabel;
@property(retain, nonatomic) MMUILabel *musicSongNameLabel; // @synthesize musicSongNameLabel=_musicSongNameLabel;
@property(retain, nonatomic) MMWebImageView *musicCoverImageView; // @synthesize musicCoverImageView=_musicCoverImageView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMUILabel *recognitionResultLabel; // @synthesize recognitionResultLabel=_recognitionResultLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMWebImageView *musicCoverBgImageView; // @synthesize musicCoverBgImageView=_musicCoverBgImageView;
@property(nonatomic) unsigned long long openScene; // @synthesize openScene=_openScene;
@property(copy, nonatomic) CDUnknownBlockType onPopBlock; // @synthesize onPopBlock=_onPopBlock;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)cellInfoButtonClick:(long long)arg1;
- (void)cellPlayButtonClick:(id)arg1 withIndex:(long long)arg2;
- (void)timerCallback;
- (void)endTimer;
- (void)startTimer;
- (id)generateEmptyMVModel;
- (id)getMusicShareItem:(id)arg1;
- (void)closeButtonDidClick;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)viewDidLayoutSubviews;
- (void)layoutInternal;
- (void)loadData;
- (void)setupSubviews;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (id)initWithShakeMusicInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

