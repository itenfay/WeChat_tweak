//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, TextStateEmojiBoardModel, TextStatePublishIconList, UICollectionView, UICollectionViewFlowLayout;
@protocol TextStateEmojiBoardViewDelegate;

@interface TextStateEmojiBoardView : UIView
{
    id <TextStateEmojiBoardViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    TextStatePublishIconList *_publishIconList;
    TextStateEmojiBoardModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateEmojiBoardModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TextStatePublishIconList *publishIconList; // @synthesize publishIconList=_publishIconList;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <TextStateEmojiBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isRecentUsedSectionValid;
- (long long)maximumRecentUsedEmojiCount;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

