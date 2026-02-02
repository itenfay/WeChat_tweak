//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString;

@interface NewSettingBaseViewController
{
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_nsTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(readonly, nonatomic) MMTableViewInfo *tableViewInfo;
- (void)reloadTableData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithTitle:(id)arg1;
- (void)mmTableView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;

@end

