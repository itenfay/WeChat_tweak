//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, UISearchController;
@protocol MMRegionSeachResultsViewControllerDelegate;

@interface MMRegionSeachResultsViewController
{
    NSArray *_results;
    id <MMRegionSeachResultsViewControllerDelegate> _delegate;
    UISearchController *_searchController;
    NSMutableArray *_countries;
    NSMutableArray *_provinces;
    NSMutableArray *_cities;
    double _searchBackgroundY;
    double _searchBackgroundHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double searchBackgroundHeight; // @synthesize searchBackgroundHeight=_searchBackgroundHeight;
@property(nonatomic) double searchBackgroundY; // @synthesize searchBackgroundY=_searchBackgroundY;
@property(retain, nonatomic) NSMutableArray *cities; // @synthesize cities=_cities;
@property(retain, nonatomic) NSMutableArray *provinces; // @synthesize provinces=_provinces;
@property(retain, nonatomic) NSMutableArray *countries; // @synthesize countries=_countries;
@property(nonatomic) __weak UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) __weak id <MMRegionSeachResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void)viewDidLayoutSubviews;
- (void)fixSearchBarBackgroundWhenActive;
- (void)clickInfoCell:(id)arg1;
- (void)reloadData;
- (void)setupData;
- (void)viewDidLoad;

@end

