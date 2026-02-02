//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, NSArray, NSString;

@interface WCMomentsGroupDetailViewController
{
    NSArray *_contactDataList;
    NSString *_viewControllerTitle;
    MMPageSheetAdapter *_pageSheetAdapter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) NSString *viewControllerTitle; // @synthesize viewControllerTitle=_viewControllerTitle;
@property(retain, nonatomic) NSArray *contactDataList; // @synthesize contactDataList=_contactDataList;
- (void)onDismissBarButtonPress:(id)arg1;
- (id)getReloadContactDataList;
- (double)getTableViewHeight;
- (double)getContentViewY;
- (void)initTableHeaderView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

