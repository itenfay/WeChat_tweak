//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIButton, NSArray, NSString, UILabel;
@protocol WCMomentsUserListHalfScreenViewControllerDelegate;

@interface WCMomentsUserListHalfScreenViewController
{
    NSArray *_userContacts;
    MMTableView *_tableView;
    UILabel *_titleLabel;
    MMUIButton *_closeButon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButon; // @synthesize closeButon=_closeButon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *userContacts; // @synthesize userContacts=_userContacts;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)loadTopViews;
- (void)loadTableView;
- (void)fitSuitableHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserContacts:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <WCMomentsUserListHalfScreenViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

