//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMLiveKtvThemeItem, NSArray, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout;

@interface MMLiveKtvThemesSelectionPageSheet
{
    MMFinderLiveTaskId *_taskId;
    NSArray *_themes;
    MMLiveKtvThemeItem *_selectedTheme;
    UIButton *_confirmButton;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMLiveKtvThemeItem *selectedTheme; // @synthesize selectedTheme=_selectedTheme;
@property(retain, nonatomic) NSArray *themes; // @synthesize themes=_themes;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)liveTask;
- (double)collectionHeight;
- (struct CGSize)cellSize;
- (void)initializeComponents;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onConfirmed;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1 themes:(id)arg2 selectedTheme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

