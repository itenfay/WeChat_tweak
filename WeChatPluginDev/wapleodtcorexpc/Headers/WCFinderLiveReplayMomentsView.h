//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUIButton, MMUILabel, NSMutableArray, NSString, UICollectionView;
@protocol WCFinderLiveReplayMomentsViewDelegate;

@interface WCFinderLiveReplayMomentsView : UIView
{
    id <WCFinderLiveReplayMomentsViewDelegate> _delegate;
    UIView *_contentView;
    MMUILabel *_headerLabel;
    CAGradientLayer *_bottomGradientLayer;
    UICollectionView *_momentsCollectionView;
    MMUIButton *_closeButton;
    double _lastContentViewHeight;
    NSMutableArray *_replayMoments;
    double _replayVideoWHPercent;
}

- (void).cxx_destruct;
@property(nonatomic) double replayVideoWHPercent; // @synthesize replayVideoWHPercent=_replayVideoWHPercent;
@property(retain, nonatomic) NSMutableArray *replayMoments; // @synthesize replayMoments=_replayMoments;
@property(nonatomic) double lastContentViewHeight; // @synthesize lastContentViewHeight=_lastContentViewHeight;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UICollectionView *momentsCollectionView; // @synthesize momentsCollectionView=_momentsCollectionView;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) MMUILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCFinderLiveReplayMomentsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double replayMomentCellHeight;
@property(readonly, nonatomic) double replayMomentCellWidth;
- (double)getMomentsCollectionViewHeight;
- (_Bool)isLandScape;
- (void)closeAction;
- (_Bool)shouldConsumeTouchFromFullScreenPanGesture:(id)arg1 fromView:(id)arg2;
- (_Bool)isOpen;
- (void)updateGreateTimeList:(id)arg1;
- (void)closeWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (double)preferHeight;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)contentViewHeight;
- (void)layoutUI;
- (void)initUI;
- (void)layoutSubviews;
- (id)initWithReplayVideoWHPercent:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

