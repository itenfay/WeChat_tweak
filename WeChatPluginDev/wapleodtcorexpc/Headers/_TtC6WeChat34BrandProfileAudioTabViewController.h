//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE;
@protocol BrandProfileBaseTabViewControllerDelegate;

@interface _TtC6WeChat34BrandProfileAudioTabViewController : UITableViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *finderUsername;
    MISSING_TYPE *bizUsername;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *$__lazy_storage_$_footerTerminatorView;
    MISSING_TYPE *$__lazy_storage_$_loadingView;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)updateSectionWidthInSectionDataList;
- (id)viewController;
- (unsigned long long)tabType;
- (id)tabTitle;
- (void)setExternalGestureRecognizer:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBizUsername:(id)arg1 finderUsername:(id)arg2;
@property(nonatomic) __weak id <BrandProfileBaseTabViewControllerDelegate> delegate; // @synthesize delegate;

@end

