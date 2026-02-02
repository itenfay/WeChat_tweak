//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UILabel, UITableView, UIView;

@interface WABrandBindWeAppListViewController
{
    UIView *_contentHeaderView;
    UILabel *_contentLabel;
    UITableView *_listTableView;
    NSArray *_arrBindWeAppInfo;
    NSString *_fromBrandUserName;
    NSString *_fromBrandAppid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fromBrandAppid; // @synthesize fromBrandAppid=_fromBrandAppid;
@property(retain, nonatomic) NSString *fromBrandUserName; // @synthesize fromBrandUserName=_fromBrandUserName;
@property(retain, nonatomic) NSArray *arrBindWeAppInfo; // @synthesize arrBindWeAppInfo=_arrBindWeAppInfo;
- (id)navigationBarBackgroundColor;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onBackButtonClicked:(id)arg1;
- (void)layoutMySubViews;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)initContentLabel;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

