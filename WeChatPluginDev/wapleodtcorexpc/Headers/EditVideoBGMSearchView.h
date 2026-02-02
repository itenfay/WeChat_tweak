//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditVideoBGMFetchFeedbackLogic, EditVideoBGMPlayer, EditVideoBGMSearchResultView, MMUIActivityIndicatorView, NSMutableArray, NSString, RecommendedMusicInfo, UIButton, UILabel, UITextField, UIView, WCStoryBgmSearchCgiObj;
@protocol EditVideoBGMSearchViewDelegate;

@interface EditVideoBGMSearchView
{
    NSString *_audioModuleIdentifier;
    _Bool _isSearchingAfterInputEnabled;
    _Bool _isLoadingMoreData;
    _Bool _isNoMoreData;
    _Bool _isLastInputModeDictation;
    unsigned int _entranceType;
    unsigned int _nextSearchPageOffset;
    id <EditVideoBGMSearchViewDelegate> _delegate;
    unsigned long long _recommentId;
    NSMutableArray *_musicList;
    UIView *_tapAndPanView;
    UIView *_contentView;
    UIView *_topBarView;
    UIButton *_topFinishView;
    UITextField *_textField;
    UIView *_tagView;
    MMUIActivityIndicatorView *_indicatorView;
    UILabel *_tipLabel;
    EditVideoBGMSearchResultView *_searchResultView;
    EditVideoBGMPlayer *_bgmPlayer;
    RecommendedMusicInfo *_selectedMusicInfo;
    WCStoryBgmSearchCgiObj *_bgmSearchObj;
    unsigned long long _searchId;
    NSMutableArray *_searchResultMusicList;
    NSString *_searchKey;
    EditVideoBGMFetchFeedbackLogic *_kvReportlogic;
    unsigned long long _maxExposureIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLastInputModeDictation; // @synthesize isLastInputModeDictation=_isLastInputModeDictation;
@property(nonatomic) unsigned long long maxExposureIndex; // @synthesize maxExposureIndex=_maxExposureIndex;
@property(retain, nonatomic) EditVideoBGMFetchFeedbackLogic *kvReportlogic; // @synthesize kvReportlogic=_kvReportlogic;
@property(nonatomic) _Bool isNoMoreData; // @synthesize isNoMoreData=_isNoMoreData;
@property(nonatomic) _Bool isLoadingMoreData; // @synthesize isLoadingMoreData=_isLoadingMoreData;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) NSMutableArray *searchResultMusicList; // @synthesize searchResultMusicList=_searchResultMusicList;
@property(nonatomic) unsigned int nextSearchPageOffset; // @synthesize nextSearchPageOffset=_nextSearchPageOffset;
@property(nonatomic) unsigned long long searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) WCStoryBgmSearchCgiObj *bgmSearchObj; // @synthesize bgmSearchObj=_bgmSearchObj;
@property(retain, nonatomic) RecommendedMusicInfo *selectedMusicInfo; // @synthesize selectedMusicInfo=_selectedMusicInfo;
@property(retain, nonatomic) EditVideoBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) EditVideoBGMSearchResultView *searchResultView; // @synthesize searchResultView=_searchResultView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIButton *topFinishView; // @synthesize topFinishView=_topFinishView;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *tapAndPanView; // @synthesize tapAndPanView=_tapAndPanView;
@property(nonatomic) _Bool isSearchingAfterInputEnabled; // @synthesize isSearchingAfterInputEnabled=_isSearchingAfterInputEnabled;
@property(nonatomic) unsigned int entranceType; // @synthesize entranceType=_entranceType;
@property(retain, nonatomic) NSMutableArray *musicList; // @synthesize musicList=_musicList;
@property(nonatomic) unsigned long long recommentId; // @synthesize recommentId=_recommentId;
@property(nonatomic) __weak id <EditVideoBGMSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_tryToUpdatePlayerToMute:(_Bool)arg1;
- (id)_getAudioModuleIdentifier;
- (void)_deactiveAudioModule;
- (void)_activeAudioModule;
- (void)_updateAudioSession;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (unsigned long long)editVideoBGMFetchFeedbackLogicGetBussnessId;
- (void)inputModeDidChange:(id)arg1;
- (void)mmTextFieldDidChange:(id)arg1;
- (void)textFieldEditingChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onSelectSearchViewTripLoadMoreData;
- (void)onSelectSearchResult:(id)arg1 index:(unsigned long long)arg2;
- (void)onSelectSearchViewClick;
- (void)onSelectTag:(id)arg1;
- (void)onTextFieldCleanBtnClick;
- (void)onFinishBtnClick;
- (void)onCancelBtnClick;
- (void)onTap:(id)arg1;
- (void)readyToPlay;
- (void)reportWithType:(unsigned long long)arg1;
- (unsigned long long)bussId;
- (_Bool)becomeFirstResponder;
- (void)proccessSearchResultMoreData:(unsigned long long)arg1 andMusicList:(id)arg2;
- (void)proccessSearchResultWithKeyword:(id)arg1 requestId:(unsigned long long)arg2 andMusicList:(id)arg3;
- (void)showNotFoundTips;
- (void)unShowSearchingView;
- (void)showSearchingView;
- (void)startSearchWith:(id)arg1 andResignInputField:(_Bool)arg2;
- (id)genTextFieldRightView;
- (void)addSearchView;
- (void)addTitleView;
- (void)setTopFinishViewEnable:(_Bool)arg1;
- (void)addTopFinishView;
- (void)addTopCancelView;
- (void)addTopBarView;
- (void)addContentView;
- (void)addPanGesture;
- (void)addTapGesture;
- (void)addTapAndPanView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

