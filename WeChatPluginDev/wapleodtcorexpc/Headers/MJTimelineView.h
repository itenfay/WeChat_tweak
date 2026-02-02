//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class NSMutableArray, NSString, UITapGestureRecognizer;
@protocol MJTimelineViewDelegate;

@interface MJTimelineView : UICollectionView
{
    _Bool _isBatchUpdating;
    _Bool _hasQueuedUpdates;
    id <MJTimelineViewDelegate> _layoutDelegate;
    UITapGestureRecognizer *_backgroundTapGR;
    NSMutableArray *_completionBlocks;
    struct CGSize _lastLayoutContentSize;
    struct CGRect _lastLayoutBounds;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastLayoutContentSize; // @synthesize lastLayoutContentSize=_lastLayoutContentSize;
@property(nonatomic) struct CGRect lastLayoutBounds; // @synthesize lastLayoutBounds=_lastLayoutBounds;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(nonatomic) _Bool hasQueuedUpdates; // @synthesize hasQueuedUpdates=_hasQueuedUpdates;
@property(nonatomic) _Bool isBatchUpdating; // @synthesize isBatchUpdating=_isBatchUpdating;
@property(readonly, nonatomic) UITapGestureRecognizer *backgroundTapGR; // @synthesize backgroundTapGR=_backgroundTapGR;
@property(nonatomic) __weak id <MJTimelineViewDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isValidMutationInfo:(id)arg1;
- (void)updateWithMutationInfo:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performBatchUpdateWithMutationInfo:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)timelineViewVisibleRect;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

