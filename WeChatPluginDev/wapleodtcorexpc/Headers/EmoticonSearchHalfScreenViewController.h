//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, EmoticonPreviewWindowViewController, EmoticonRecommendBoardCgi, EmoticonSearchBoardView, EmoticonSearchInMessagePanelReporter, NSArray, NSString, UICollectionViewFlowLayout, UITableView;
@protocol EmoticonSearchHalfScreenViewControllerDelegate;

@interface EmoticonSearchHalfScreenViewController
{
    _Bool _disableWebSearch;
    _Bool _hasAddObserver;
    _Bool _hasAddMsgTableViewObserver;
    _Bool _isSearchWithRecentQuery;
    unsigned int _sourceScene;
    int _animationMode;
    double _standardHeight;
    NSString *_currentText;
    NSString *_chatId;
    UICollectionViewFlowLayout *_collectionLayout;
    CADisplayLink *_displayLink;
    NSArray *_localSearchWraps;
    NSArray *_svrSearchWraps;
    EmoticonRecommendBoardCgi *_recommendBoardCgi;
    NSString *_currentRequestText;
    EmoticonSearchBoardView *_boardView;
    EmoticonPreviewWindowViewController *_emoticonPreview;
    UITableView *_observedMsgTableView;
    CDUnknownBlockType _presentAnimateBlock;
    CDUnknownBlockType _dismissAnimateBlock;
    EmoticonSearchInMessagePanelReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonSearchInMessagePanelReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) int animationMode; // @synthesize animationMode=_animationMode;
@property(copy, nonatomic) CDUnknownBlockType dismissAnimateBlock; // @synthesize dismissAnimateBlock=_dismissAnimateBlock;
@property(copy, nonatomic) CDUnknownBlockType presentAnimateBlock; // @synthesize presentAnimateBlock=_presentAnimateBlock;
@property(retain, nonatomic) UITableView *observedMsgTableView; // @synthesize observedMsgTableView=_observedMsgTableView;
@property(nonatomic) _Bool isSearchWithRecentQuery; // @synthesize isSearchWithRecentQuery=_isSearchWithRecentQuery;
@property(nonatomic) _Bool hasAddMsgTableViewObserver; // @synthesize hasAddMsgTableViewObserver=_hasAddMsgTableViewObserver;
@property(nonatomic) _Bool hasAddObserver; // @synthesize hasAddObserver=_hasAddObserver;
@property(retain, nonatomic) EmoticonPreviewWindowViewController *emoticonPreview; // @synthesize emoticonPreview=_emoticonPreview;
@property(retain, nonatomic) EmoticonSearchBoardView *boardView; // @synthesize boardView=_boardView;
@property(retain, nonatomic) NSString *currentRequestText; // @synthesize currentRequestText=_currentRequestText;
@property(retain, nonatomic) EmoticonRecommendBoardCgi *recommendBoardCgi; // @synthesize recommendBoardCgi=_recommendBoardCgi;
@property(retain, nonatomic) NSArray *svrSearchWraps; // @synthesize svrSearchWraps=_svrSearchWraps;
@property(retain, nonatomic) NSArray *localSearchWraps; // @synthesize localSearchWraps=_localSearchWraps;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) NSString *chatId; // @synthesize chatId=_chatId;
@property(retain, nonatomic) NSString *currentText; // @synthesize currentText=_currentText;
@property(nonatomic) _Bool disableWebSearch; // @synthesize disableWebSearch=_disableWebSearch;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) double standardHeight; // @synthesize standardHeight=_standardHeight;
@property(readonly, nonatomic) _Bool needResetPresentedViewFrame;
- (void)setuphalfScreenViewAnimationForPresentedBlockFollowKeyboard;
- (void)setuphalfScreenViewAnimationForPresentedBlockDefault;
- (void)keyboardWillShow:(id)arg1;
- (void)onExposure:(id)arg1 bottomIndex:(unsigned long long)arg2;
- (void)onClickEmotionStore;
- (void)onClickWSSButtton:(id)arg1;
- (void)onClickPurchaseTipButton:(long long)arg1 chooseEmoticonWrap:(id)arg2;
- (void)onSearchEmoticonLongPressToPreview:(id)arg1 description:(id)arg2 frame:(struct CGRect)arg3 index:(unsigned long long)arg4;
- (void)onSearchBarCancelButtonClicked;
- (void)resetRecommendBoardRequest;
- (void)onSearchBarSearchEmoticonWithText:(id)arg1;
- (_Bool)isMsgTableScrollToBottom;
- (void)removeMsgTableViewObserver;
- (void)dismissAfterSend;
- (void)onSendEmoticonWithEmoticonWrap:(id)arg1;
- (void)onSelectEmoticon:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onEmoticonRecommendBoardCgiFailed:(id)arg1;
- (void)onEmoticonRecommendBoardCgiOk:(id)arg1 recommendWraps:(id)arg2;
- (void)onShouldShowEmoticonDetailPage:(id)arg1;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (double)animateContentViewTop;
- (void)onContentViewTopChanged:(id)arg1;
- (void)invalidateDisplayLink;
- (void)setupAnimateTransitionBlocks;
- (_Bool)isAnimationFollowKeyboard;
- (void)makeSearchBarBecomeFirstResponder;
- (void)hideKeyboardOnSearchWithRecentQuery;
- (void)configBoardView;
- (void)configSvrData;
- (void)configData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initNotificationObservers;
- (id)initWithCurrentTextAndCid:(id)arg1 chatId:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <EmoticonSearchHalfScreenViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

