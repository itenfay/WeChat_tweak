//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, WCFinderProfileCollectionListView, WCFinderTagListView;
@protocol WCFinderProfileFeedPageHeaderContainerViewDelegate;

@interface WCFinderProfileFeedPageHeaderContainerView : UICollectionReusableView
{
    id <WCFinderProfileFeedPageHeaderContainerViewDelegate> _delegate;
    WCFinderTagListView *_tagListView;
    WCFinderProfileCollectionListView *_collectionListView;
}

+ (double)displayHeightWithTagLayout:(id)arg1 collectionLayout:(id)arg2;
+ (id)createTagListViewOptions;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfileCollectionListView *collectionListView; // @synthesize collectionListView=_collectionListView;
@property(retain, nonatomic) WCFinderTagListView *tagListView; // @synthesize tagListView=_tagListView;
@property(nonatomic) __weak id <WCFinderProfileFeedPageHeaderContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupReportWithCollectionItemButtons:(id)arg1;
- (void)setupReportWithNextEpisodeBtn:(id)arg1 allEpisodeBtn:(id)arg2 moreBtn:(id)arg3;
- (void)collectionListDisplayHeightChanged;
- (void)clickedMoreButton;
- (void)clickedCollectionItemWithInfo:(id)arg1;
- (void)clickedAllEpisodeButton;
- (void)clickedNextEpisodeButton;
- (void)onTagListViewIsExpandChanged:(id)arg1 isExpand:(_Bool)arg2;
- (void)onTagListView:(id)arg1 onSelectedItem:(id)arg2;
- (void)updateWithTagLayout:(id)arg1 selectedTopic:(id)arg2 collectionLayout:(id)arg3;
- (void)updateWithoutNotifyTagLayout:(id)arg1 selectedTopic:(id)arg2 collectionLayout:(id)arg3;
- (void)layoutSubviews;
- (void)configureSubviewWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

