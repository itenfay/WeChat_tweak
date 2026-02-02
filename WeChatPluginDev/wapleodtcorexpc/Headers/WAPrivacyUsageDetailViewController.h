//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UILabel, UIView, WAContact;

@interface WAPrivacyUsageDetailViewController
{
    WAContact *_contact;
    NSMutableArray *_cellDataList;
    unsigned int _minUpdateTime;
    _Bool _hasNoMore;
    UIView *_emptyView;
    UILabel *_emptyLabel;
    UIView *_footerView;
}

- (void).cxx_destruct;
- (id)navigationBarBackgroundColor;
- (void)getPrivacyUsageDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getPrivacyUsageDetailCgi:(id)arg1 didGetUsageDetailRecordList:(id)arg2 hasNoMore:(_Bool)arg3;
- (void)requestNextPagePrivacyUsageRecord;
- (void)initRefreshControl;
- (id)makeFooterMarginView;
- (void)initEmptyView;
- (void)updateListData;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

