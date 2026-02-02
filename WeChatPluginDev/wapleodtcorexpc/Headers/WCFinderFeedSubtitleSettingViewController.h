//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSMutableArray, NSString, UILabel, UITableView;
@protocol WCFinderFeedSubtitleSettingViewControllerDelegate;

@interface WCFinderFeedSubtitleSettingViewController
{
    id <WCFinderFeedSubtitleSettingViewControllerDelegate> _delegate;
    UITableView *_tableView;
    UILabel *_headerTipsLabel;
    NSMutableArray *_itemArray;
    NSIndexPath *_initialSelectedIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *initialSelectedIndexPath; // @synthesize initialSelectedIndexPath=_initialSelectedIndexPath;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) UILabel *headerTipsLabel; // @synthesize headerTipsLabel=_headerTipsLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCFinderFeedSubtitleSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableFooterView;
- (id)tableHeaderView;
- (id)titleAtIndex:(unsigned long long)arg1;
- (id)indexPathOfSelectRow:(id)arg1;
- (double)tableViewHeight;
- (_Bool)isLandScape;
- (void)updateWithLanguageArray:(id)arg1 displaySet:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)loadContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

