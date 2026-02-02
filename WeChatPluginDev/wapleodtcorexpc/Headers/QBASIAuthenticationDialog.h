//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, QBASIHTTPRequest, UITableView, UIViewController;

@interface QBASIAuthenticationDialog
{
    QBASIHTTPRequest *request;
    int type;
    UITableView *tableView;
    UIViewController *presentingController;
    _Bool didEnableRotationNotifications;
}

+ (void)dismiss;
+ (void)presentAuthenticationDialogForRequest:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) UIViewController *presentingController; // @synthesize presentingController;
@property _Bool didEnableRotationNotifications; // @synthesize didEnableRotationNotifications;
@property(retain) UITableView *tableView; // @synthesize tableView;
@property int type; // @synthesize type;
@property(retain) QBASIHTTPRequest *request; // @synthesize request;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loginWithCredentialsFromDialog:(id)arg1;
- (void)presentNextDialog;
- (id)requestsRequiringTheseCredentials;
- (void)cancelAuthenticationFromDialog:(id)arg1;
- (void)show;
- (void)showTitle;
- (void)dismiss;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)domainField;
- (id)passwordField;
- (id)usernameField;
- (id)textFieldInRow:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)orientationChanged:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

