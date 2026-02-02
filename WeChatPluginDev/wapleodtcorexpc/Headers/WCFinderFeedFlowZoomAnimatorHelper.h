//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UICollectionView, UICollectionViewCell, UIView;

@interface WCFinderFeedFlowZoomAnimatorHelper : NSObject
{
    UICollectionView *_collectionView;
    CDUnknownBlockType _idxPathGetter;
    UIView *_cacheSnapView;
    UICollectionViewCell *_cacheCell;
}

+ (id)helperWithCollectionView:(id)arg1 idxPathGetter:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UICollectionViewCell *cacheCell; // @synthesize cacheCell=_cacheCell;
@property(retain, nonatomic) UIView *cacheSnapView; // @synthesize cacheSnapView=_cacheSnapView;
@property(copy, nonatomic) CDUnknownBlockType idxPathGetter; // @synthesize idxPathGetter=_idxPathGetter;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)browserFeedIndexPathForTid:(id)arg1;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (void)safeReloadCollectionViewItem:(id)arg1;
- (void)onAnimatorWillBeginClosure:(id)arg1;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

