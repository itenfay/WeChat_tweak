//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSArray, NSMutableDictionary, NSString, UIView, WCPayBindCardInfo, WCPayControlData;
@protocol WCPayOfflinePaySelectPayCardViewDelegate;

@interface WCPayOfflinePaySelectPayCardView
{
    _Bool _bHasPostScreenChangeAccessibilityNotification;
    id <WCPayOfflinePaySelectPayCardViewDelegate> _delegate;
    long long _fromScene;
    WCPayControlData *_controlData;
    NSString *_curSelectCardSerial;
    MMUIView *_backgroundView;
    MMUIView *_contentView;
    NSArray *_displayCardArray;
    WCPayBindCardInfo *_selectedCardInfo;
    NSMutableDictionary *_cellHeightCache;
    double _totalCellHeight;
    NSMutableDictionary *_cellTitleHalfYCache;
    UIView *_m_titleArea;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHasPostScreenChangeAccessibilityNotification; // @synthesize bHasPostScreenChangeAccessibilityNotification=_bHasPostScreenChangeAccessibilityNotification;
@property(retain, nonatomic) UIView *m_titleArea; // @synthesize m_titleArea=_m_titleArea;
@property(retain, nonatomic) NSMutableDictionary *cellTitleHalfYCache; // @synthesize cellTitleHalfYCache=_cellTitleHalfYCache;
@property(nonatomic) double totalCellHeight; // @synthesize totalCellHeight=_totalCellHeight;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(retain, nonatomic) WCPayBindCardInfo *selectedCardInfo; // @synthesize selectedCardInfo=_selectedCardInfo;
@property(retain, nonatomic) NSArray *displayCardArray; // @synthesize displayCardArray=_displayCardArray;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *curSelectCardSerial; // @synthesize curSelectCardSerial=_curSelectCardSerial;
@property(retain, nonatomic) WCPayControlData *controlData; // @synthesize controlData=_controlData;
@property(nonatomic) long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) __weak id <WCPayOfflinePaySelectPayCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)minimchBankDescContent:(id)arg1;
- (id)yhtBankDescContent:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (_Bool)isLQTCardinfo:(id)arg1;
- (_Bool)isBalanceCardInfo:(id)arg1;
- (id)getBankLogoUrlWithBankType:(id)arg1;
- (double)calcCellHeightWithCardInfo:(id)arg1 index:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)arg1 cell:(id)arg2 cellHeight:(double)arg3 isFirstCell:(_Bool)arg4 isLastCell:(_Bool)arg5;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)calcTableViewContentHeight;
- (void)cancelBtnPress;
- (void)handleTap;
- (void)dismissWithShouCallDelegate:(_Bool)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)confirmBtnClick;
- (_Bool)paymentSelectRemoveConfirmButton;
- (void)setupDisplayCardDataSource;
- (void)setCurSelectCardBindSerial:(id)arg1;
- (id)initSelectPayCardViewWithControlData:(id)arg1 delegate:(id)arg2 fromScene:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

