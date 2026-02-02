//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, UISearchController;
@protocol WCPaySelectBankSearchResultViewControllerDelegate;

@interface WCPaySelectBankSearchResultViewController
{
    id <WCPaySelectBankSearchResultViewControllerDelegate> _delegate;
    NSArray *_results;
    UISearchController *_searchController;
    double _searchBackgroundY;
    double _searchBackgroundHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double searchBackgroundHeight; // @synthesize searchBackgroundHeight=_searchBackgroundHeight;
@property(nonatomic) double searchBackgroundY; // @synthesize searchBackgroundY=_searchBackgroundY;
@property(nonatomic) __weak UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) __weak id <WCPaySelectBankSearchResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableViewForHeader;
- (void)clickInfoCell:(id)arg1;
- (void)makeSearchBankCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)fixSearchBarBackgroundWhenActive;
- (void)viewDidLoad;

@end

