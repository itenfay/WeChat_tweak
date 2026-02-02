//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MMUISearchBar, NSString;
@protocol WCFinderPOIRelatedListHalfTableViewSearchHeaderDelegate;

@interface WCFinderPOIRelatedListHalfTableViewSearchHeader : UITableViewHeaderFooterView
{
    MMUISearchBar *_searchBar;
    id <WCFinderPOIRelatedListHalfTableViewSearchHeaderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderPOIRelatedListHalfTableViewSearchHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)mmsearchBarResignActive;
- (void)mmsearchBarBecomeActive;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)updateSearchBarAppearance;
- (void)clickSearchBar:(id)arg1;
- (void)layoutSubviews;
- (void)initSearchBar;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

