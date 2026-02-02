//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo;

@interface StatusRepairViewController
{
    MMTableViewInfo *m_tableViewInfo;
    struct CGPoint _layoutOrigin;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint layoutOrigin; // @synthesize layoutOrigin=_layoutOrigin;
- (void)viewDidLayoutSubviews;
- (void)onSwitchCell:(id)arg1 cell:(id)arg2;
- (void)viewDidLoad;

@end

