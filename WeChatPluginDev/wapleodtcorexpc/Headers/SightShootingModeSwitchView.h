//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSArray, NSString, UICollectionView;
@protocol SightShootingModeSwitchViewDelegate;

@interface SightShootingModeSwitchView
{
    NSArray *_dataSource;
    id <SightShootingModeSwitchViewDelegate> _delegate;
    UICollectionView *_collectionView;
    MMUIView *_dotView;
    unsigned long long _currentShootingMode;
    unsigned long long _lastShootingMode;
}

+ (double)viewH;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastShootingMode; // @synthesize lastShootingMode=_lastShootingMode;
@property(nonatomic) unsigned long long currentShootingMode; // @synthesize currentShootingMode=_currentShootingMode;
@property(retain, nonatomic) MMUIView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <SightShootingModeSwitchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (struct CGPoint)nearestTargetOffsetForOffset:(struct CGPoint)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateTitleStats;
- (unsigned long long)getLastShootingMode;
- (unsigned long long)getCurrentShootingMode;
- (void)scrollToIndex:(unsigned long long)arg1;
- (void)setToTemplateShootingMode;
- (void)prepareToScroll;
- (void)reloadData;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

