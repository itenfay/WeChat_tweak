//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMAssetInfo, NSIndexPath, NSMutableArray, NSMutableSet, NSString, UICollectionView, UICollectionViewFlowLayout, UIColor;
@protocol MMAssetSelectedCollectionViewDelegate, MMImagePickerControlCenter;

@interface MMAssetSelectedCollectionView : UIView
{
    UICollectionViewFlowLayout *m_collectionLayout;
    UICollectionView *m_collectionView;
    UIView *m_snapedView;
    NSIndexPath *m_oldIndexPath;
    MMAssetInfo *m_selectedInfo;
    NSMutableSet *m_disableInfo;
    UIColor *m_borderColor;
    NSMutableArray *_previewInfos;
    id <MMImagePickerControlCenter> _controlCenter;
    id <MMAssetSelectedCollectionViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMAssetSelectedCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(retain, nonatomic) NSMutableArray *previewInfos; // @synthesize previewInfos=_previewInfos;
- (void)handlelongGesture:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configCollectionView;
- (_Bool)isDisableForAssetInfo:(id)arg1;
@property(readonly, nonatomic) MMAssetInfo *selectedInfo;
- (id)indexPathForAssetInfo:(id)arg1;
- (void)reloadView;
- (unsigned long long)indexForAssetInfoIgnoreDisables:(id)arg1;
- (void)toggleSelectAssetInfo:(id)arg1;
- (void)deleteItemAtIndex:(unsigned long long)arg1;
- (void)insertItemAtLast;
- (void)changeToAssetInfo:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)changeToAssetInfo:(id)arg1;
- (void)updateWidth:(double)arg1 showCount:(unsigned long long)arg2;
- (id)initWithBorderColor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

