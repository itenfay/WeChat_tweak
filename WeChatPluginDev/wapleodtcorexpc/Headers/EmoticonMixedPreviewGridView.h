//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EmoticonMixedPreviewGridViewConfig, EmoticonPreviewWindowViewController, NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, UILongPressGestureRecognizer;
@protocol EmoticonMixedPreviewGridViewDelegate><MMUIViewControllerDelegate;

@interface EmoticonMixedPreviewGridView : UIView
{
    id <EmoticonMixedPreviewGridViewDelegate><MMUIViewControllerDelegate> _delegate;
    EmoticonMixedPreviewGridViewConfig *_config;
    UICollectionView *_collectionView;
    NSArray *_displayCellList;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSIndexPath *_selectedIndexPath;
    UICollectionViewFlowLayout *_collectionLayout;
    EmoticonPreviewWindowViewController *_emoticonPreview;
    UIView *_colorMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *colorMaskView; // @synthesize colorMaskView=_colorMaskView;
@property(retain, nonatomic) EmoticonPreviewWindowViewController *emoticonPreview; // @synthesize emoticonPreview=_emoticonPreview;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) NSArray *displayCellList; // @synthesize displayCellList=_displayCellList;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) EmoticonMixedPreviewGridViewConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <EmoticonMixedPreviewGridViewDelegate><MMUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportTouchForMD5:(id)arg1 pid:(id)arg2 selectionType:(unsigned long long)arg3;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (_Bool)hasItemsToShow;
- (void)hideEmoticonPreview;
- (void)showPreview:(id)arg1 description:(id)arg2 frame:(struct CGRect)arg3 index:(unsigned long long)arg4;
- (void)onLongPressToPreview:(id)arg1;
- (unsigned long long)maxPreviewCount;
- (unsigned long long)maxEmojiCountForDesigner;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)configGestureRecognizer;
- (void)updateConfig:(id)arg1;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

