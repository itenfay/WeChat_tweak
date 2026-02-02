//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, MMTListAdapter, NSString, RingToneRecommendReporter_23604, RingToneSearchViewModel, WCSearcher, WCTimeLineFooterView;
@protocol RingToneSearchProxyDelegate;

@interface RingToneSearchProxy : NSObject
{
    _Bool _isFetchingData;
    RingToneRecommendReporter_23604 *_reporter;
    CContact *_exclusiveContact;
    id <RingToneSearchProxyDelegate> _delegate;
    WCSearcher *_searcher;
    RingToneSearchViewModel *_viewModel;
    WCTimeLineFooterView *_footerView;
    MMTListAdapter *_listAdapter;
    unsigned long long _searchRequestID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long searchRequestID; // @synthesize searchRequestID=_searchRequestID;
@property(retain, nonatomic) MMTListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) RingToneSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(nonatomic) __weak id <RingToneSearchProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *exclusiveContact; // @synthesize exclusiveContact=_exclusiveContact;
@property(retain, nonatomic) RingToneRecommendReporter_23604 *reporter; // @synthesize reporter=_reporter;
- (id)getFriendName;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(_Bool)arg2;
- (void)jumpToAuthorPage:(id)arg1;
- (void)willDisplayCellAtIndex:(long long)arg1;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2;
- (void)didSelectRowAtIndex:(long long)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchWithFirstPage:(_Bool)arg1;
- (void)initListAdapter;
- (void)configSearcher;
- (id)initWithSearcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

