//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CgiBindQueryRecord, MMTableView, MMUIViewController, NSArray, NSString, UIButton, UIView;
@protocol WCPayLQTSelectCardItemDelegate;

@interface WCPayLQTSelectCardItem
{
    MMUIViewController *currentViewController;
    id <WCPayLQTSelectCardItemDelegate> delegate;
    NSArray *_displayCardArray;
    UIView *_backgroundView;
    UIView *_contentView;
    MMTableView *_cardsTableView;
    CgiBindQueryRecord *_selectedRecord;
    CgiBindQueryRecord *_resultRecord;
    UIButton *_confirmButton;
    UIView *_m_titleArea;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *m_titleArea; // @synthesize m_titleArea=_m_titleArea;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) CgiBindQueryRecord *resultRecord; // @synthesize resultRecord=_resultRecord;
@property(retain, nonatomic) CgiBindQueryRecord *selectedRecord; // @synthesize selectedRecord=_selectedRecord;
@property(retain, nonatomic) MMTableView *cardsTableView; // @synthesize cardsTableView=_cardsTableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSArray *displayCardArray; // @synthesize displayCardArray=_displayCardArray;
- (void)setCurrentViewController:(id)arg1;
- (void)dismiss;
- (void)becomeFirstResponder;
- (void)handleTap;
- (void)hide;
- (void)cancelBtnPress;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)makeAddNewCardCell:(id)arg1;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)arg1 cell:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (_Bool)paymentSelectRemoveConfirmButton;
- (void)onTapConfirm;
- (void)setDisplayCardDataSource:(id)arg1;
- (void)setCurrentCardBindSerial:(id)arg1;
- (id)getValue;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;
- (void)setItemDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

