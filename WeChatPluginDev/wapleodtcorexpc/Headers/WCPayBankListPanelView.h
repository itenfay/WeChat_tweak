//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSArray, NSMutableDictionary, NSString, UIView, WCPayControlData;
@protocol WCPayBankListPanelViewDelegate;

@interface WCPayBankListPanelView
{
    id <WCPayBankListPanelViewDelegate> _delegate;
    WCPayControlData *_controlData;
    NSArray *_bankList;
    NSString *_curSelectCardSerial;
    NSString *_title;
    NSString *_desc;
    double _contentViewHeight;
    double _contentCellHeight;
    NSString *_addNewCardCellTitle;
    MMUIView *_backgroundView;
    MMUIView *_contentView;
    NSMutableDictionary *_cellHeightCache;
    double _totalCellHeight;
    NSMutableDictionary *_cellTitleHalfYCache;
    UIView *_m_titleArea;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *m_titleArea; // @synthesize m_titleArea=_m_titleArea;
@property(retain, nonatomic) NSMutableDictionary *cellTitleHalfYCache; // @synthesize cellTitleHalfYCache=_cellTitleHalfYCache;
@property(nonatomic) double totalCellHeight; // @synthesize totalCellHeight=_totalCellHeight;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *addNewCardCellTitle; // @synthesize addNewCardCellTitle=_addNewCardCellTitle;
@property(nonatomic) double contentCellHeight; // @synthesize contentCellHeight=_contentCellHeight;
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *curSelectCardSerial; // @synthesize curSelectCardSerial=_curSelectCardSerial;
@property(retain, nonatomic) NSArray *bankList; // @synthesize bankList=_bankList;
@property(retain, nonatomic) WCPayControlData *controlData; // @synthesize controlData=_controlData;
@property(nonatomic) __weak id <WCPayBankListPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isCellIndexLargeThanDataCount:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (_Bool)isBalanceCardInfo:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)makeAddNewCardCell:(id)arg1 cellHeight:(double)arg2;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)arg1 cell:(id)arg2 cellHeight:(double)arg3 isFirstCell:(_Bool)arg4 isLastCell:(_Bool)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)calcCellHeightWithCardInfo:(id)arg1 index:(long long)arg2;
- (_Bool)paymentSelectRemoveConfirmButton;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)calcTableViewContentHeight;
- (void)cancelBtnPress;
- (void)handleTap;
- (void)dismissWithShouCallDelegate:(_Bool)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)confirmBtnClick;
- (void)setPanellViewDesc:(id)arg1;
- (void)setPanelViewTitle:(id)arg1;
- (void)setSelectedCardSerial:(id)arg1;
- (void)setBankListArray:(id)arg1;
- (id)initBankListPanelViewWithDelegate:(id)arg1 controlData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

