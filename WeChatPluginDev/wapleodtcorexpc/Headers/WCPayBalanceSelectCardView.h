//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTableViewInfo, MMUIView, NSArray, NSMutableArray, NSString, WCPayBindCardInfo, WCPayControlData;
@protocol WCPayBalanceSelectCardViewDelegate;

@interface WCPayBalanceSelectCardView : UIView
{
    id <WCPayBalanceSelectCardViewDelegate> _delegate;
    WCPayControlData *_data;
    WCPayBindCardInfo *_selectedCard;
    NSMutableArray *_availableCards;
    NSArray *_serialArray;
    MMUIView *_backgroundView;
    MMUIView *_contentView;
    MMTableViewInfo *_tableViewInfo;
    UIView *_m_titleArea;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *m_titleArea; // @synthesize m_titleArea=_m_titleArea;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSArray *serialArray; // @synthesize serialArray=_serialArray;
@property(retain, nonatomic) NSMutableArray *availableCards; // @synthesize availableCards=_availableCards;
@property(retain, nonatomic) WCPayBindCardInfo *selectedCard; // @synthesize selectedCard=_selectedCard;
@property(retain, nonatomic) WCPayControlData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <WCPayBalanceSelectCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)calculateTableViewHeightWithMarginTop:(double)arg1 marginBottom:(double)arg2;
- (id)getAvailableCards:(id)arg1;
- (_Bool)isCardForbid:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)cancelBtnPress;
- (void)handleTap;
- (void)selectVerifyNewCard;
- (void)onClickConfirm;
- (void)clickCardCell:(id)arg1;
- (void)makeSelectNewCardCell:(id)arg1;
- (double)calcTitleHalfHeightAndmakeCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (_Bool)paymentSelectRemoveConfirmButton;
- (void)dismiss;
- (void)show;
- (id)initWithData:(id)arg1 selectedCard:(id)arg2 serialArray:(id)arg3 delegate:(id)arg4;
- (id)initWithData:(id)arg1 selectedCard:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

