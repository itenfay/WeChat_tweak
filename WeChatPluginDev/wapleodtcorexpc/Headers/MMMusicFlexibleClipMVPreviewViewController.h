//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMMVPlayer, MMMusicFlexEditBarThumbLoader, MMMusicFlexEditBarTransitionPanel, MMMusicLiveCGIMgr, MMMusicMVFlexClipEditBar, MMMusicMVModel, MMUIButton, NSArray, NSMutableArray, NSString, UILabel, UITapGestureRecognizer, WCDragDeleteBarView;

@interface MMMusicFlexibleClipMVPreviewViewController
{
    NSArray *_arrSelectedItem;
    MMMVPlayer *_mvPlayer;
    _Bool _bSeekingMusic;
    _Bool _isInClearMode;
    _Bool _isMVEdit;
    _Bool _isShowExitConfirmActionSheet;
    CDUnknownBlockType _closedBlock;
    CDUnknownBlockType _publishReloadBlock;
    unsigned long long _exitType;
    MMMusicMVModel *_mvModel;
    MMMusicMVModel *_currMvModel;
    MMUIButton *_cancelBtn;
    MMUIButton *_doneBtn;
    UILabel *_titleLabel;
    MMMusicMVFlexClipEditBar *_editBar;
    CAGradientLayer *_grayLayer;
    UITapGestureRecognizer *_clearTapGestureRecognizer;
    MMMusicLiveCGIMgr *_cgiMgr;
    MMMusicFlexEditBarThumbLoader *_thumbLoader;
    NSMutableArray *_mutableArrSelectedItem;
    unsigned long long _curSelectedIndex;
    MMUIButton *_addButton;
    WCDragDeleteBarView *_deleteBarView;
    double _initialEditBarScale;
    unsigned long long _initialEditBarTimeInterval;
    MMMusicFlexEditBarTransitionPanel *_transitionPanel;
    NSMutableArray *_transitionModelArr;
    MMMusicMVModel *_mvModelHistory;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowExitConfirmActionSheet; // @synthesize isShowExitConfirmActionSheet=_isShowExitConfirmActionSheet;
@property(retain, nonatomic) MMMusicMVModel *mvModelHistory; // @synthesize mvModelHistory=_mvModelHistory;
@property(nonatomic) _Bool isMVEdit; // @synthesize isMVEdit=_isMVEdit;
@property(retain, nonatomic) NSMutableArray *transitionModelArr; // @synthesize transitionModelArr=_transitionModelArr;
@property(retain, nonatomic) MMMusicFlexEditBarTransitionPanel *transitionPanel; // @synthesize transitionPanel=_transitionPanel;
@property(nonatomic) unsigned long long initialEditBarTimeInterval; // @synthesize initialEditBarTimeInterval=_initialEditBarTimeInterval;
@property(nonatomic) double initialEditBarScale; // @synthesize initialEditBarScale=_initialEditBarScale;
@property(retain, nonatomic) WCDragDeleteBarView *deleteBarView; // @synthesize deleteBarView=_deleteBarView;
@property(retain, nonatomic) MMUIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) unsigned long long curSelectedIndex; // @synthesize curSelectedIndex=_curSelectedIndex;
@property(retain, nonatomic) NSMutableArray *mutableArrSelectedItem; // @synthesize mutableArrSelectedItem=_mutableArrSelectedItem;
@property(retain, nonatomic) MMMusicFlexEditBarThumbLoader *thumbLoader; // @synthesize thumbLoader=_thumbLoader;
@property(retain, nonatomic) MMMusicLiveCGIMgr *cgiMgr; // @synthesize cgiMgr=_cgiMgr;
@property(nonatomic) _Bool isInClearMode; // @synthesize isInClearMode=_isInClearMode;
@property(retain, nonatomic) UITapGestureRecognizer *clearTapGestureRecognizer; // @synthesize clearTapGestureRecognizer=_clearTapGestureRecognizer;
@property(retain, nonatomic) CAGradientLayer *grayLayer; // @synthesize grayLayer=_grayLayer;
@property(retain, nonatomic) MMMusicMVFlexClipEditBar *editBar; // @synthesize editBar=_editBar;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) MMMusicMVModel *currMvModel; // @synthesize currMvModel=_currMvModel;
@property(retain, nonatomic) MMMusicMVModel *mvModel; // @synthesize mvModel=_mvModel;
@property(nonatomic) unsigned long long exitType; // @synthesize exitType=_exitType;
@property(copy, nonatomic) CDUnknownBlockType publishReloadBlock; // @synthesize publishReloadBlock=_publishReloadBlock;
@property(copy, nonatomic) CDUnknownBlockType closedBlock; // @synthesize closedBlock=_closedBlock;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didReplayBtnClicked:(id)arg2;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didCancelBtnClicked:(id)arg2;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didDoneBtnClicked:(id)arg2;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didTransitionPanelCellClicked:(id)arg2;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didBlankAreaClicked:(id)arg2;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didLoadCompleteWithCurTransitionModel:(id)arg2;
- (id)mvFlexEditBarTransitionPanelGetCurTransitionId:(id)arg1;
- (id)mvFlexEditBarTransitionPanelGetTransitionModelArr:(id)arg1;
- (void)updateTransitionWhenSortFinishWithPreTrackItemArr:(id)arg1;
- (void)finishTransitionPreviewWithPreIndex:(unsigned long long)arg1 andNextIndex:(unsigned long long)arg2 transitionModel:(id)arg3;
- (void)startTransitionPreviewWithPreIndex:(unsigned long long)arg1 andNextIndex:(unsigned long long)arg2 transitionModel:(id)arg3;
- (void)showOrHideTransitionPanel;
- (void)onNeedReloadTrackItem:(id)arg1;
- (void)didCorrectSeek;
- (void)updateAfterDragAction;
- (void)refreshGapTrackItemOffsetAndLength;
- (id)getGhostIndexArr;
- (id)mvFlexClipEditBarGetGhostIndexArr:(id)arg1;
- (_Bool)mvFlexClipEditBarSupportGhostMaterial:(id)arg1;
- (void)mvFlexClipEditBar:(id)arg1 didTransitionCellClickedWithPreIndex:(unsigned long long)arg2 andNextIndex:(unsigned long long)arg3;
- (_Bool)mvFlexClipEditBar:(id)arg1 isModifyTransitionWithPreIndex:(unsigned long long)arg2 andNextIndex:(unsigned long long)arg3;
- (_Bool)mvFlexClipEditBarSupportTransitionSelection:(id)arg1;
- (void)refreshTimeOffsetInMv;
- (void)onCellNeetUpdateWidth:(double)arg1 index:(unsigned long long)arg2;
- (void)onCellNeetUpdateOffset:(double)arg1 index:(unsigned long long)arg2;
- (void)thumbImageForTimeSec:(double)arg1 cellIndex:(unsigned long long)arg2 blockOnGetThumbImage:(CDUnknownBlockType)arg3;
- (_Bool)canDragSideWithIndex:(unsigned long long)arg1;
- (double)mvFlexClipEditBar:(id)arg1 maxDurationInSecondWithItemIndex:(unsigned long long)arg2;
- (double)mvFlexClipEditBar:(id)arg1 offsetInSecondWithItemIndex:(unsigned long long)arg2;
- (double)mvFlexClipEditBar:(id)arg1 durationInSecondWithItemIndex:(unsigned long long)arg2;
- (_Bool)mvFlexClipEditBarHasPlaceholderItem:(id)arg1;
- (long long)numberOfItems;
- (void)onDidSortFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (void)onWillSortFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (void)onWillEnterSortMode;
- (void)setCurrentDraggingMode:(_Bool)arg1;
- (void)onScrollEnd;
- (void)onDragSideEnd;
- (void)onMusicFlexClipEditBarDragSideBegin:(id)arg1;
- (_Bool)mvFlexClipEditBar:(id)arg1 shouldShowSelectedCellProgressLineWithIndex:(unsigned long long)arg2;
- (void)mvFlexClipEditBar:(id)arg1 onPinchGestureRecognizerStateChanged:(long long)arg2;
- (_Bool)mvFlexClipEditBar:(id)arg1 shouldHandleLongPressGestureEndAtPoint:(struct CGPoint)arg2 cellIndex:(long long)arg3;
- (void)mvFlexClipEditBar:(id)arg1 didChangeLongPressLocation:(struct CGPoint)arg2 cellIndex:(long long)arg3;
- (void)mvFlexClipEditBar:(id)arg1 onDeselectCellWithCancelBtnClick:(unsigned long long)arg2;
- (void)mvFlexClipEditBar:(id)arg1 onDeselectCellWithDoneBtnClick:(unsigned long long)arg2;
- (void)onDeselectCell:(unsigned long long)arg1;
- (void)setControlElemetnsHidden:(_Bool)arg1;
- (void)onSelectCell:(unsigned long long)arg1;
- (double)mvFlexClipEditBarWidthPerSecond:(id)arg1;
- (_Bool)mvPlayer:(id)arg1 shouldHandleFinishLoopTimeRange:(id)arg2;
- (void)MVPlayer:(id)arg1 onMusicStateChanged:(unsigned long long)arg2 musicInfo:(id)arg3 errorInfo:(id)arg4;
- (void)MVPlayer:(id)arg1 onMusicProgressUpdate:(double)arg2 totalDuration:(double)arg3;
- (void)tapGestureRecognized:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isInSelectedMode;
- (void)handleRemoveAssetsInIndex:(long long)arg1;
- (void)reloadData;
- (void)handleAddSelectedAssets:(id)arg1;
- (void)addButtonClicked:(id)arg1;
- (void)onClear;
- (void)OnDone;
- (void)realExitWithDiscardEditInfo:(_Bool)arg1;
- (void)showReturnConfirmActionSheet;
- (void)OnReturn;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (_Bool)hidesStatusBar;
- (void)setupInitialBarScaleWith:(double)arg1;
- (void)setupInitialBarScaleWithModel:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 selectedItemArr:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

