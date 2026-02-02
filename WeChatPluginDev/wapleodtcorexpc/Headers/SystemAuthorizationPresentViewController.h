//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSMutableArray, NSString, UIStackView, UIView;

@interface SystemAuthorizationPresentViewController
{
    MMTableViewInfo *m_tableViewInfo;
    NSMutableArray *m_authItems;
    UIStackView *_tableHeaderView;
    UIStackView *_tableFooterView;
    UIView *_emptyView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIStackView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIStackView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
- (void)jumpToSystemPrivacySetting;
- (_Bool)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (void)onTapCell:(id)arg1;
- (void)reloadTableData;
- (void)initInteractiveNavi;
- (void)initItems;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

