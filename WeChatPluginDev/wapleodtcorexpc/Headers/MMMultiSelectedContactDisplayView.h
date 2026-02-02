//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UICollectionView;
@protocol MMMultiSelectedContactDisplayViewDelegate;

@interface MMMultiSelectedContactDisplayView
{
    id <MMMultiSelectedContactDisplayViewDelegate> _delegate;
    NSMutableArray *_contactList;
    UICollectionView *_collectionView;
    long long _layoutMode;
}

+ (double)getDisplayViewHeight;
- (void).cxx_destruct;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *contactList; // @synthesize contactList=_contactList;
@property(nonatomic) __weak id <MMMultiSelectedContactDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genContactItemViewWithContact:(id)arg1;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)removeContactSpecialMode:(id)arg1;
- (void)addContactSpecialMode:(id)arg1;
- (unsigned long long)findAndRemoveContact:(id)arg1;
- (void)resetCollectionView;
- (_Bool)isContactExist:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)getDisplayViewInNormalState;
- (void)reloadData;
- (void)handleRemoveContact:(id)arg1;
- (void)handleAddNewContact:(id)arg1;
- (void)handleSetExistContacts:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)checkAndUpdateSelfHeightForContactCount:(long long)arg1;
- (void)initView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)getContentLineSpacing;
- (double)getContentInterSpacing;
- (double)getContentRightOffset;
- (double)getContentTopOffset;
- (double)getDisplayItemLen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

