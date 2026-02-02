//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveHeaderView, MMFinderLiveTask, MMLiveMoreLivesIndicatorBar, MMLiveTask, NSMutableArray, NSString, UIImage, UIImageView, UILabel, UIView, WCLiveScrollActionSheet;

@interface MMLiveStopStateDisplayViewController
{
    _Bool _isMovingToNewScene;
    int _commentScene;
    MMLiveTask *_liveTask;
    NSMutableArray *_liveContentVMs;
    long long _currentIndex;
    long long _tabType;
    UIImage *_lastFrameImage;
    MMLiveMoreLivesIndicatorBar *_moreLivesIndicatorBar;
    unsigned long long _interruptBusinessType;
    UIView *_backMaskView;
    UILabel *_tipLabel;
    UILabel *_subTipLabel;
    UIImageView *_lastFrameImageView;
    MMFinderLiveHeaderView *_liveHeaderView;
    WCLiveScrollActionSheet *_settingScrollActionSheet;
    NSString *_subTipContent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subTipContent; // @synthesize subTipContent=_subTipContent;
@property(retain, nonatomic) WCLiveScrollActionSheet *settingScrollActionSheet; // @synthesize settingScrollActionSheet=_settingScrollActionSheet;
@property(retain, nonatomic) MMFinderLiveHeaderView *liveHeaderView; // @synthesize liveHeaderView=_liveHeaderView;
@property(retain, nonatomic) UIImageView *lastFrameImageView; // @synthesize lastFrameImageView=_lastFrameImageView;
@property(retain, nonatomic) UILabel *subTipLabel; // @synthesize subTipLabel=_subTipLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *backMaskView; // @synthesize backMaskView=_backMaskView;
@property(nonatomic) _Bool isMovingToNewScene; // @synthesize isMovingToNewScene=_isMovingToNewScene;
@property(nonatomic) unsigned long long interruptBusinessType; // @synthesize interruptBusinessType=_interruptBusinessType;
@property(retain, nonatomic) MMLiveMoreLivesIndicatorBar *moreLivesIndicatorBar; // @synthesize moreLivesIndicatorBar=_moreLivesIndicatorBar;
@property(retain, nonatomic) UIImage *lastFrameImage; // @synthesize lastFrameImage=_lastFrameImage;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *liveContentVMs; // @synthesize liveContentVMs=_liveContentVMs;
@property(retain, nonatomic) MMLiveTask *liveTask; // @synthesize liveTask=_liveTask;
- (void)didMoveToNewScene:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onContactClick:(id)arg1 index:(unsigned long long)arg2;
- (void)changeToOtherAppScene;
- (void)openTrumpetSelectViewController;
- (void)gotoLotteryWinRecordViewController;
- (void)complaintEntry;
- (void)trySharingToTextStateWithBlock:(CDUnknownBlockType)arg1;
- (void)shareToTextState;
- (void)trySharingWithBlock:(CDUnknownBlockType)arg1;
- (void)shareToMoment;
- (void)shareToFriend;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)updateSubTipContent;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)restartLive;
- (void)onTapGesture;
- (void)gotoMoreLive;
- (void)gotoAnchorProfileView:(id)arg1;
- (void)onFollowingButtonClick:(id)arg1;
- (void)onFollowButtonClick:(id)arg1;
- (void)onHeadImageOrLabelClick:(id)arg1;
- (void)onCloseButtonClick;
- (void)onActionButtonClick;
- (void)addRestartGesture;
- (_Bool)isLiveCommentSceneCanShowMoreLive;
- (void)layoutMoreLivesIndicatorBar;
- (void)layoutHeaderView;
- (void)updateTipLabelOrigin;
- (void)layoutSubTipLabel;
- (void)layoutTipLabel;
- (void)layoutBackMaskView;
- (void)layoutLastFrameImageView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

