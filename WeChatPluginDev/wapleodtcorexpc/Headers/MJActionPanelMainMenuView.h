//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UICollectionView;
@protocol MJActionPanelMainMenuViewDelegate;

@interface MJActionPanelMainMenuView : UIView
{
    _Bool _isSectionSeparatorVisible;
    _Bool _shouldCellsCenterAligned;
    id <MJActionPanelMainMenuViewDelegate> _delegate;
    unsigned long long _panelConfiguration;
    NSArray *_sectionInsets;
    UICollectionView *_collectionView;
    NSArray *_menuItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(nonatomic) _Bool shouldCellsCenterAligned; // @synthesize shouldCellsCenterAligned=_shouldCellsCenterAligned;
@property(nonatomic) _Bool isSectionSeparatorVisible; // @synthesize isSectionSeparatorVisible=_isSectionSeparatorVisible;
@property(nonatomic) unsigned long long panelConfiguration; // @synthesize panelConfiguration=_panelConfiguration;
@property(nonatomic) __weak id <MJActionPanelMainMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)calculateHorizontalAlignmentInsetsForAllSectionsInCollectionView:(id)arg1;
- (id)defaultSectionInsetsForCollectionView:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateSectionInsets;
- (void)updateWithMenuItems:(id)arg1 configuration:(unsigned long long)arg2 forceUpdate:(_Bool)arg3;
- (_Bool)menuItemsHaveChanges:(id)arg1;
- (void)commonInit;
- (void)setupConfiguration:(unsigned long long)arg1;
- (id)initWithMenuItems:(id)arg1 configuration:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

