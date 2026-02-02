//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UIButton, UIImageView, UILabel, UIView, WCFinderContact, WCFinderSDKFinderBindTopView;
@protocol WCFinderSDKAuthorViewControllerDelegate;

@interface WCFinderSDKAuthorViewController
{
    id <WCFinderSDKAuthorViewControllerDelegate> _delegate;
    NSString *_appName;
    NSString *_appIconURL;
    NSString *_appID;
    UILabel *_descLabel;
    UILabel *_titleLabel;
    UIImageView *_titleIcon;
    UIButton *_comfirmBtn;
    UIButton *_denyBtn;
    MMTableView *_tableView;
    WCFinderSDKFinderBindTopView *_tableHeaderView;
    UIView *_tableFooterView;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) WCFinderSDKFinderBindTopView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *denyBtn; // @synthesize denyBtn=_denyBtn;
@property(retain, nonatomic) UIButton *comfirmBtn; // @synthesize comfirmBtn=_comfirmBtn;
@property(retain, nonatomic) UIImageView *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) __weak id <WCFinderSDKAuthorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnAppInfoChanged:(id)arg1;
- (void)OnGotListAppSettingItem:(id)arg1 errType:(int)arg2;
- (void)createUserFinished:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDenyBtnClick;
- (void)onComfirmBtnClick;
- (void)onReturn;
- (id)navigationBarBackgroundColor;
- (void)layoutTableFooterView;
- (void)initTableFooterView;
- (void)layoutTableHeaderView;
- (void)initTableHeaderView;
- (void)reloadData;
- (void)initSubViews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appName:(id)arg2 iconURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

