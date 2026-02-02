//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NewLifeTransitionManager, UICollectionView;
@protocol NewLifeDetailCollectionViewAnimatorDelegate;

@interface NewLifeDetailCollectionViewAnimator : NSObject
{
    id <NewLifeDetailCollectionViewAnimatorDelegate> _delegate;
    UICollectionView *_collectionView;
    NSString *_feedId;
    NewLifeTransitionManager *_transitionManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeTransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <NewLifeDetailCollectionViewAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldShowCellAtIndexPath:(id)arg1;
- (void)selectCell:(id)arg1 atIndexPath:(id)arg2;

@end

