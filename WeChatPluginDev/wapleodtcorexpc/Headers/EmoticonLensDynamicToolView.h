//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCameraDynamiFlowLayout, NSArray, NSMutableArray, NSString, UICollectionView, UIView;
@protocol EmoticonLensDynamicToolViewDelegate;

@interface EmoticonLensDynamicToolView
{
    UIView *m_selectedMaterialBox;
    NSMutableArray *m_emoticonLensList;
    unsigned long long m_scenes;
    id <EmoticonLensDynamicToolViewDelegate> _delegate;
    NSString *_selectedEmoticonLensId;
    unsigned long long _selectedEmoticonLensIndex;
    UICollectionView *_dynamicCollectionView;
    EmoticonCameraDynamiFlowLayout *_dynamicLayout;
    NSMutableArray *_extraLensList;
}

+ (double)getHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *extraLensList; // @synthesize extraLensList=_extraLensList;
@property(retain, nonatomic) EmoticonCameraDynamiFlowLayout *dynamicLayout; // @synthesize dynamicLayout=_dynamicLayout;
@property(retain, nonatomic) UICollectionView *dynamicCollectionView; // @synthesize dynamicCollectionView=_dynamicCollectionView;
@property(nonatomic) unsigned long long selectedEmoticonLensIndex; // @synthesize selectedEmoticonLensIndex=_selectedEmoticonLensIndex;
@property(copy, nonatomic) NSString *selectedEmoticonLensId; // @synthesize selectedEmoticonLensId=_selectedEmoticonLensId;
@property(nonatomic) __weak id <EmoticonLensDynamicToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)motionTmplSelectedItemAtIndexPath:(id)arg1;
- (void)reloadDataAndExposure;
- (void)trySelectLensWithLensId:(id)arg1 shouldCallDelegate:(_Bool)arg2;
- (_Bool)isLastIndex:(id)arg1;
- (void)appendEmoticonLens:(id)arg1;
- (void)selectEmoticonLensAtIndex:(unsigned long long)arg1;
- (void)scrollToEmoticonLensWithId:(id)arg1;
- (void)selectEmoticonLensWithId:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)p_selectItemWithEmoticonLensItem:(id)arg1;
- (void)p_selectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) NSArray *visiableLens;
- (void)setHidden:(_Bool)arg1;
- (void)reloadLensList;
- (id)initWithFrame:(struct CGRect)arg1 andScenes:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

