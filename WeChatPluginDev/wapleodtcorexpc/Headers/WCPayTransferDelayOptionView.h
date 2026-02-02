//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIButton, UILabel, UIView, WCPayCss;
@protocol WCPayTransferDelayOptionViewDelegate;

@interface WCPayTransferDelayOptionView
{
    unsigned int _selected;
    id <WCPayTransferDelayOptionViewDelegate> _m_delegate;
    NSArray *_options;
    WCPayCss *_css;
    UIView *_baseView;
    UIView *_container;
    UILabel *_titleLabel;
    UIView *_lineView;
    UIView *_cellContainer;
    UIView *_bottomContainer;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    NSString *_title;
    NSString *_desc;
    UILabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain) UIView *cellContainer; // @synthesize cellContainer=_cellContainer;
@property(retain) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIView *container; // @synthesize container=_container;
@property(retain) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property unsigned int selected; // @synthesize selected=_selected;
@property(retain) NSArray *options; // @synthesize options=_options;
@property __weak id <WCPayTransferDelayOptionViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onTapConfirm;
- (void)onTapCancel;
- (void)updateConfirmButton;
- (void)updateCancelButton;
- (void)updateBottomContainer;
- (void)updateCell:(id)arg1 selected:(unsigned int)arg2;
- (void)onTapCell:(id)arg1;
- (void)updateCellContainer;
- (void)udpateLineView;
- (void)updateDescLabel;
- (void)updateTitleLabel;
- (void)maskPanel;
- (void)updateContainer;
- (void)updateBaseView;
- (void)onTapEmpty;
- (void)layoutSubviews;
- (void)updateSubView;
- (void)updateDelayOption:(id)arg1 selected:(unsigned int)arg2;
- (id)initWithTitle:(id)arg1 desc:(id)arg2;

@end

