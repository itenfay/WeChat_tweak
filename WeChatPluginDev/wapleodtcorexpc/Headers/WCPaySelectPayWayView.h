//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTableViewInfo, MMUIView, NSArray, NSString, WCPayControlData;
@protocol WCPaySelectPayWayViewDelegate;

@interface WCPaySelectPayWayView : UIView
{
    _Bool _showAddNewCard;
    id <WCPaySelectPayWayViewDelegate> _delegate;
    WCPayControlData *_data;
    NSArray *_infos;
    NSString *_title;
    NSString *_desc;
    NSString *_selectedCardSerial;
    MMUIView *_backgroundView;
    MMUIView *_contentView;
    MMTableViewInfo *_tableViewInfo;
    UIView *_titleArea;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *titleArea; // @synthesize titleArea=_titleArea;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *selectedCardSerial; // @synthesize selectedCardSerial=_selectedCardSerial;
@property(nonatomic) _Bool showAddNewCard; // @synthesize showAddNewCard=_showAddNewCard;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *infos; // @synthesize infos=_infos;
@property(retain, nonatomic) WCPayControlData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <WCPaySelectPayWayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)cardName:(id)arg1;
- (_Bool)isCardForbid:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)cancelBtnPress;
- (void)handleTap;
- (void)selectAddNewCard;
- (void)clickCardCell:(id)arg1;
- (void)makeSelectNewCardCell:(id)arg1;
- (void)makeCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)dismiss;
- (void)show;
- (id)initWithCards:(id)arg1 data:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

