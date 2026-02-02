//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLiveHomePageAdSectionView;
@protocol WCFinderLiveHomePageAdSectionViewDelegate;

@interface WCFinderLiveHomePageAdSectionCollectionViewCell
{
    id <WCFinderLiveHomePageAdSectionViewDelegate> _delegate;
    WCFinderLiveHomePageAdSectionView *_liveCollectionView;
}

+ (id)cellIdentifier;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageAdSectionView *liveCollectionView; // @synthesize liveCollectionView=_liveCollectionView;
@property(nonatomic) __weak id <WCFinderLiveHomePageAdSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
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

