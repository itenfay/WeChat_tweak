//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicVideoTransitionModel, MMUIButton, MMUILabel, MMUIView, NSString, UICollectionView;
@protocol MMMusicFlexEditBarTransitionPanelDataSource, MMMusicFlexEditBarTransitionPanelDelegate;

@interface MMMusicFlexEditBarTransitionPanel : UIView
{
    id <MMMusicFlexEditBarTransitionPanelDelegate> _delegate;
    id <MMMusicFlexEditBarTransitionPanelDataSource> _dataSource;
    unsigned long long _preIndex;
    unsigned long long _nextIndex;
    MMMusicVideoTransitionModel *_curTransitionModel;
    MMMusicVideoTransitionModel *_curTransitionModelHistory;
    MMUIView *_containerView;
    MMUIView *_bottomContainerView;
    MMUILabel *_titleLabel;
    UICollectionView *_transitionCollectionView;
    MMUIButton *_cancelBtn;
    MMUIButton *_doneBtn;
    MMUIButton *_replayBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *replayBtn; // @synthesize replayBtn=_replayBtn;
@property(retain, nonatomic) MMUIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UICollectionView *transitionCollectionView; // @synthesize transitionCollectionView=_transitionCollectionView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) MMUIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMMusicVideoTransitionModel *curTransitionModelHistory; // @synthesize curTransitionModelHistory=_curTransitionModelHistory;
@property(retain, nonatomic) MMMusicVideoTransitionModel *curTransitionModel; // @synthesize curTransitionModel=_curTransitionModel;
@property(nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) unsigned long long preIndex; // @synthesize preIndex=_preIndex;
@property(nonatomic) __weak id <MMMusicFlexEditBarTransitionPanelDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MMMusicFlexEditBarTransitionPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickReplayBtn;
- (void)onClickDoneBtn;
- (void)onClickCancelBtn;
- (void)onClickBlankArea;
- (_Bool)isTransitionSelectedWithTransitionId:(id)arg1;
- (id)transitionModelArr;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setReplayBtnHidden:(_Bool)arg1;
- (void)refreshSelectedStatus:(_Bool)arg1;
- (void)reloadDataWithPreIndex:(unsigned long long)arg1 andNextIndex:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)internalInit;
- (id)initWithFrame:(struct CGRect)arg1 withPreIndex:(unsigned long long)arg2 andNextIndex:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

