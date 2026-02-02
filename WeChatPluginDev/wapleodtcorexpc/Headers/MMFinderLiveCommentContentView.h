//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UITapGestureRecognizer;

@interface MMFinderLiveCommentContentView
{
    CDUnknownBlockType _getIsShowingInputViewCallback;
    CDUnknownBlockType _getIsEnableChangeContentStateCallback;
    CDUnknownBlockType _getEnableShowContentTabBarCallback;
    CDUnknownBlockType _onNotifyAreaHeightChangedCallback;
    NSArray *_redDotList;
    unsigned long long _startDisplayTime;
    UITapGestureRecognizer *_commentTableTapGesRecognizer;
    double _previousNotifyAreaHeight;
}

+ (double)currentCommentTableWidth:(id)arg1;
+ (double)commentTableWidthLandScape:(id)arg1;
+ (double)commentTableWidthPortrait:(id)arg1;
+ (double)commentTableWidth:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double previousNotifyAreaHeight; // @synthesize previousNotifyAreaHeight=_previousNotifyAreaHeight;
@property(nonatomic) __weak UITapGestureRecognizer *commentTableTapGesRecognizer; // @synthesize commentTableTapGesRecognizer=_commentTableTapGesRecognizer;
@property(nonatomic) unsigned long long startDisplayTime; // @synthesize startDisplayTime=_startDisplayTime;
@property(retain, nonatomic) NSArray *redDotList; // @synthesize redDotList=_redDotList;
@property(copy, nonatomic) CDUnknownBlockType onNotifyAreaHeightChangedCallback; // @synthesize onNotifyAreaHeightChangedCallback=_onNotifyAreaHeightChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType getEnableShowContentTabBarCallback; // @synthesize getEnableShowContentTabBarCallback=_getEnableShowContentTabBarCallback;
@property(copy, nonatomic) CDUnknownBlockType getIsEnableChangeContentStateCallback; // @synthesize getIsEnableChangeContentStateCallback=_getIsEnableChangeContentStateCallback;
@property(copy, nonatomic) CDUnknownBlockType getIsShowingInputViewCallback; // @synthesize getIsShowingInputViewCallback=_getIsShowingInputViewCallback;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCommentTableTapGesture:(id)arg1;
- (id)createCommentTableView;
- (_Bool)isUnReadCntLabelPanNeedScrollCommentTable;
- (id)createUnReadCountLabel;
- (_Bool)checkSelfHasConsumePivotCollectionTapGesture:(id)arg1;
- (id)redirectHitTouchIfNeeded:(struct CGPoint)arg1 touchInView:(id)arg2;
- (id)redirectHitTestIfNeeded:(struct CGPoint)arg1 event:(id)arg2 originHitView:(id)arg3;
- (void)checkSelfHasConsumeTouch:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleScrollConflicts:(id)arg1;
- (void)reportForUnDisplay;
- (void)reportForDisplay;
- (id)commentDataMgr;
- (id)createHotWordsCommentContainerViewIfNeeded;
- (id)createTopCommentContainerViewIfNeeded;
- (void)checkNotifyAreaHeightIsChanged;
- (double)getNotifyAreaHeight;
- (void)checkHasRedDot;
- (void)updateRedDotList:(id)arg1;
- (_Bool)getIsEnableChangeContentState;
- (_Bool)getIsShowingInputView;
- (_Bool)getEnableShowContentTabBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

