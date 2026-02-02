//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLiveHomePageHistorySectionView;
@protocol WCFinderLiveHomePageHistorySectionViewDelegate;

@interface WCFinderLiveHomePageHistorySectionCollectionViewCell
{
    id <WCFinderLiveHomePageHistorySectionViewDelegate> _delegate;
    WCFinderLiveHomePageHistorySectionView *_liveCollectionView;
}

+ (double)cellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageHistorySectionView *liveCollectionView; // @synthesize liveCollectionView=_liveCollectionView;
@property(nonatomic) __weak id <WCFinderLiveHomePageHistorySectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)indexPathsForVisibleItems;
- (id)collectionView;
- (void)scrollToTop:(_Bool)arg1;
- (void)reloadData;
- (void)updateWithVM:(id)arg1;
- (void)initViewsIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

