//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNewUserPrepareResponse, NSString, WCTableViewManager;

@interface WCFinderAccountSettingViewController
{
    FinderNewUserPrepareResponse *_prepareResponse;
    WCTableViewManager *_tableViewManager;
    NSString *_currentFinderUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentFinderUsername; // @synthesize currentFinderUsername=_currentFinderUsername;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) FinderNewUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
- (void)openWebWithURLString:(id)arg1;
- (void)showMiniProgramWithAcctConfig:(id)arg1;
- (void)clickCell:(id)arg1 indexPath:(id)arg2;
- (void)reloadTableView;
- (void)configureTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUsername:(id)arg1;

@end

