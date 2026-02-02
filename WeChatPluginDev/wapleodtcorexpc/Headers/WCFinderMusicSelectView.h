//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString, UICollectionView, WCFinderMusicSelectViewInitParams;
@protocol WCFinderMusicSelectViewDataSource, WCFinderMusicSelectViewDelegate;

@interface WCFinderMusicSelectView : UIView
{
    id <WCFinderMusicSelectViewDelegate> _delegate;
    id <WCFinderMusicSelectViewDataSource> _dataSource;
    unsigned long long _currentIndex;
    UICollectionView *_collectionView;
    MMUIButton *_bgmButton;
    MMUIButton *_osButton;
    MMUIButton *_closeButton;
    WCFinderMusicSelectViewInitParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMusicSelectViewInitParams *params; // @synthesize params=_params;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIButton *osButton; // @synthesize osButton=_osButton;
@property(retain, nonatomic) MMUIButton *bgmButton; // @synthesize bgmButton=_bgmButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <WCFinderMusicSelectViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCFinderMusicSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideOSTButton;
- (id)getButton;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)musicSearcherVC:(id)arg1 didRequestAudioModule:(_Bool)arg2;
- (void)musicSearcherVC:(id)arg1 didCancelWithMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didCommitMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didSelectMusic:(id)arg2 atIndex:(id)arg3;
- (void)musicSearcherVC:(id)arg1 didRequestSearchKey:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_setOriginSoundSelected:(_Bool)arg1 triggerByAction:(_Bool)arg2;
- (void)onOriginSoundOnOffBtnClick:(id)arg1;
- (void)onMusicOnOffBtnClick:(id)arg1;
- (void)onClickCloseBtn:(id)arg1;
- (void)onSearchBtnClick:(id)arg1;
- (id)getViewController;
- (void)scrollToIndex:(unsigned long long)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)manualChangeOstButtonEnable:(_Bool)arg1;
- (_Bool)isOstButtonSelected;
- (_Bool)isBgmButtonSelected;
- (double)contentHeight;
- (void)reloadData;
- (void)resetIndex;
- (void)layoutOptionButton:(id)arg1;
- (void)setupViews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

