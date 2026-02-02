//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BusiF2FFavorCommResp, MMTableView, NSMutableArray, NSString, UIButton, UIView;
@protocol WCPayBizF2FFavorSelectViewDelegate;

@interface WCPayBizF2FFavorSelectView
{
    UIButton *_m_rightButton;
    UIView *_m_lineView;
    MMTableView *_m_tableView;
    BusiF2FFavorCommResp *_m_favorResp;
    id <WCPayBizF2FFavorSelectViewDelegate> _m_delegate;
    NSMutableArray *_m_selectedArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_selectedArray; // @synthesize m_selectedArray=_m_selectedArray;
@property(nonatomic) __weak id <WCPayBizF2FFavorSelectViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) BusiF2FFavorCommResp *m_favorResp; // @synthesize m_favorResp=_m_favorResp;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) UIButton *m_rightButton; // @synthesize m_rightButton=_m_rightButton;
- (void)reportWithScene:(unsigned long long)arg1;
- (void)onWCPayFavorSelectCellSelectIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onClickRightButton;
- (void)updateLineView;
- (void)updateRightButton;
- (void)updateTableView;
- (void)updateView;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

