//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTableViewManager;

@interface WCFinderWCTableViewManagerVC
{
    WCTableViewManager *_tableViewManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
- (void)onBuildTables;
- (void)reloadData;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

