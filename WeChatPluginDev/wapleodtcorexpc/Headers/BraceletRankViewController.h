//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BraceletChampionTailView, BraceletRankUtils, CAGradientLayer, DeviceRankInfo, ForwardMessageLogicController, MMHeadImageView, MMTableView, MMUILabel, MMWebImageView, NSDictionary, NSMutableArray, NSMutableSet, NSString, NSTimer, RankExtInfo, UIImage, UIImageView, UILabel, UIView;

@interface BraceletRankViewController
{
    MMTableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_championTipView;
    MMWebImageView *_championCoverView;
    UIImageView *_leaderView;
    MMUILabel *_tipLablel;
    NSString *_rankId;
    NSDictionary *_infoDic;
    NSString *_championCoverUrl;
    NSString *_championMotto;
    NSMutableArray *_rankInfoArray;
    NSTimer *m_disappearTimer;
    _Bool _bExpired;
    NSString *_nsScrollToName;
    NSString *_nsJumpChampionUrl;
    _Bool _isLikedCover;
    _Bool _hasCoverUrl;
    NSString *_donateStepsUrl;
    NSString *_nsShareTitle;
    NSString *_nsShareUrl;
    NSString *_nsSelfCoverUrl;
    unsigned int _iEntranceScence;
    UIImageView *_blurView;
    UIImage *_snapShotImg;
    _Bool _isBluring;
    RankExtInfo *m_rankExtInfo;
    DeviceRankInfo *m_myselfRankInfo;
    NSMutableSet *friendLikeSet;
    UIView *m_oTableFooterView;
    ForwardMessageLogicController *m_forwardLogic;
    MMHeadImageView *m_oHeadImageView;
    _Bool m_bAbroad;
    BraceletRankUtils *m_oBraceletRankUtils;
    UIImage *m_oSelfCoverImage;
    long long _timestamp;
    NSString *_championUsername;
    UIView *_championView;
    UILabel *_currentDayLabel;
    MMHeadImageView *_championHeadImageView;
    UILabel *_championDisplayLabel;
    BraceletChampionTailView *_championTailView;
    CAGradientLayer *_gradientLayer;
    NSMutableArray *_likeMeUserList;
    NSMutableArray *_focusArray;
    NSMutableArray *_focusInfoArray;
}

+ (_Bool)launchDonateStepWAApp:(id)arg1 fromRank:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *focusInfoArray; // @synthesize focusInfoArray=_focusInfoArray;
@property(retain, nonatomic) NSMutableArray *focusArray; // @synthesize focusArray=_focusArray;
@property(retain, nonatomic) NSMutableArray *likeMeUserList; // @synthesize likeMeUserList=_likeMeUserList;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) BraceletChampionTailView *championTailView; // @synthesize championTailView=_championTailView;
@property(retain, nonatomic) UILabel *championDisplayLabel; // @synthesize championDisplayLabel=_championDisplayLabel;
@property(retain, nonatomic) MMHeadImageView *championHeadImageView; // @synthesize championHeadImageView=_championHeadImageView;
@property(retain, nonatomic) UILabel *currentDayLabel; // @synthesize currentDayLabel=_currentDayLabel;
@property(retain, nonatomic) UIView *championView; // @synthesize championView=_championView;
@property(retain, nonatomic) NSString *championUsername; // @synthesize championUsername=_championUsername;
- (void)onRankBeBlackedWithUserName:(id)arg1;
- (void)onClickHeadImage;
- (void)onShareAbroadStep;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)launchDonateStepWAApp;
- (void)donateSteps;
- (void)shareToTimeline;
- (void)shareToFriend;
- (void)launchChatStepRank;
- (void)onShare;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)onDelFollowWithUserName:(id)arg1 error:(int)arg2;
- (void)onAddFollowWithFollowItems:(id)arg1 error:(int)arg2;
- (void)onCoverImageChanged;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToLikeUser;
- (void)onLikeFriendRank:(id)arg1 optype:(unsigned int)arg2 err:(int)arg3;
- (void)onClickChampionTailView;
- (void)updateChampionUsername;
- (void)refreshFollowsDataWith:(id)arg1;
- (void)sortMyFollows;
- (void)mergeLikeCountWith:(id)arg1;
- (void)refreshLikedMeDataWith:(id)arg1;
- (void)refreshRankingDataWith:(id)arg1;
- (id)convertRankingInfoFromRawItem:(id)arg1;
- (void)updateViewForResp:(id)arg1;
- (void)updateDataForResp:(id)arg1;
- (void)onReceivedRankingResp:(id)arg1 rankId:(id)arg2 success:(_Bool)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)makeCell:(id)arg1 AtIndexPath:(id)arg2;
- (id)getRankInfoAtIndexPath:(id)arg1;
- (void)updateChampionTailView;
- (void)updateChampionCover:(id)arg1;
- (_Bool)shouldChangeMyCover:(id)arg1;
- (void)updateMyCover:(id)arg1;
- (void)layoutChampionView;
- (id)genChampionView;
- (void)addChampionView;
- (void)addBkgView;
- (_Bool)shouldChangeChampionCover:(id)arg1;
- (void)setTipsForSettingCoverVisible:(_Bool)arg1;
- (void)addRightBarButtonForShare;
- (id)defaultChampionCoverImage;
- (id)removeAllNumberAndComma:(id)arg1;
- (void)initChampionTailView;
- (void)onRankInfoClicked:(id)arg1;
- (void)clickToInviteFriend:(id)arg1;
- (void)updateTableFooterView;
- (void)reloadTable;
- (void)updateTableBgView;
- (void)onSingleTap:(id)arg1;
- (void)animatChangeLikeStateForUser:(id)arg1 isTolikeState:(_Bool)arg2;
- (void)onClickLike:(id)arg1;
- (void)onRankProfile;
- (id)braceletRankUtils;
- (void)openChampionProfile;
- (void)updateInfoViewSnapshot;
- (void)updateHeadImageView;
- (_Bool)canShowChampionTailView;
- (void)initTableView;
- (void)initNotSupportView;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLikeUserInfoDictionary:(id)arg1;
- (id)initForLatestRank;
- (id)initWithRankInfoDictionary:(id)arg1 bExpire:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

