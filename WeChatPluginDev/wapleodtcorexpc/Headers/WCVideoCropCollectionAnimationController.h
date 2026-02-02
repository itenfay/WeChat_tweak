//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSMutableSet, UICollectionView;

@interface WCVideoCropCollectionAnimationController : UIView
{
    _Bool _isEnlarged;
    NSMutableDictionary *_imageViewsOnShow;
    NSMutableSet *_imageViewsUnused;
    UICollectionView *_collectionView;
    long long _enlargedCellRow;
    struct CGRect _newFrame;
}

+ (void)beginAnimationForCollectionView:(id)arg1 enlargedCellRow:(unsigned long long)arg2 collectionViewNewFrame:(struct CGRect)arg3 isEnlarge:(_Bool)arg4;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect newFrame; // @synthesize newFrame=_newFrame;
@property(nonatomic) long long enlargedCellRow; // @synthesize enlargedCellRow=_enlargedCellRow;
@property(nonatomic) _Bool isEnlarged; // @synthesize isEnlarged=_isEnlarged;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableSet *imageViewsUnused; // @synthesize imageViewsUnused=_imageViewsUnused;
@property(retain, nonatomic) NSMutableDictionary *imageViewsOnShow; // @synthesize imageViewsOnShow=_imageViewsOnShow;
- (id)keyForElementIndex:(long long)arg1 isInserted:(_Bool)arg2;
- (void)showRestoreAnimation;
- (void)showEnlargeAnimation;
- (void)beginAnimationForCollectionView:(id)arg1 enlargedCellRow:(long long)arg2 collectionViewNewFrame:(struct CGRect)arg3 isEnlarge:(_Bool)arg4;

@end

