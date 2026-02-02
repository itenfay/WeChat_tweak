//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, TXCDashboardWindow, UITableView, UITextView;

@interface TXCDashboardLayoutView : UIViewController
{
    _Bool _collapseTableView;
    TXCDashboardWindow *_containerWindow;
    UITextView *_statusView;
    UITextView *_logView;
    UITableView *_dashboardIDTableView;
    NSDictionary *_dashboardInfo;
    NSString *_currentShowDashboardID;
}

+ (id)defaultLayoutView;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentShowDashboardID; // @synthesize currentShowDashboardID=_currentShowDashboardID;
@property(retain, nonatomic) NSDictionary *dashboardInfo; // @synthesize dashboardInfo=_dashboardInfo;
@property(nonatomic, getter=isCollapseTableView) _Bool collapseTableView; // @synthesize collapseTableView=_collapseTableView;
@property(retain, nonatomic) UITableView *dashboardIDTableView; // @synthesize dashboardIDTableView=_dashboardIDTableView;
@property(retain, nonatomic) UITextView *logView; // @synthesize logView=_logView;
@property(retain, nonatomic) UITextView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) TXCDashboardWindow *containerWindow; // @synthesize containerWindow=_containerWindow;
- (void)runInMainThread:(CDUnknownBlockType)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)collapseList:(id)arg1;
- (id)createTableView:(struct CGRect)arg1;
- (id)createTextView:(struct CGRect)arg1;
- (void)createSubviews;
- (void)reloadDashboardTableView;
- (void)reloadLogTextView;
- (void)reloadStatusTextView;
- (void)reloadAllSubviewsIfNeeded;
- (void)updateDashboardInfo:(id)arg1;
- (void)show:(_Bool)arg1;
- (id)initWithContainerWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

