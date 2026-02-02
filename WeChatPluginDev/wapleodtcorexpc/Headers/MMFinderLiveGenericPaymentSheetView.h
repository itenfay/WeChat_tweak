//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGenericPaymentConfig, MMUIButton, MMUIMaskContainerView, NSArray, NSString, RichTextView, UIButton, UILabel, UIScrollView;
@protocol MMFinderLiveGenericPaymentSheetViewDelegate;

@interface MMFinderLiveGenericPaymentSheetView
{
    id <MMFinderLiveGenericPaymentSheetViewDelegate> _sheetDelegate;
    MMFinderLiveGenericPaymentConfig *_config;
    NSArray *_items;
    NSArray *_itemViews;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MMUIMaskContainerView *_scrollContainerView;
    UIScrollView *_itemScrollView;
    UILabel *_itemDescLabel;
    MMUIButton *_agreementCheckbox;
    RichTextView *_agreementTextView;
    UIButton *_payButton;
    UILabel *_itemAdditionalDescLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *itemAdditionalDescLabel; // @synthesize itemAdditionalDescLabel=_itemAdditionalDescLabel;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) RichTextView *agreementTextView; // @synthesize agreementTextView=_agreementTextView;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) UILabel *itemDescLabel; // @synthesize itemDescLabel=_itemDescLabel;
@property(retain, nonatomic) UIScrollView *itemScrollView; // @synthesize itemScrollView=_itemScrollView;
@property(retain, nonatomic) MMUIMaskContainerView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) MMFinderLiveGenericPaymentConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <MMFinderLiveGenericPaymentSheetViewDelegate> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
- (void)shakeView:(id)arg1;
- (void)onItemSelected:(id)arg1;
- (void)selectItemView:(id)arg1;
- (void)onItemViewTapped:(id)arg1;
- (void)onCheckBoxClicked;
- (void)panelDidClickQuestionView:(id)arg1;
- (void)onPayButtonClicked;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (double)getAgreementTextMaxWidth;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (double)relayoutItemViewsAndReturnDescLeft;
- (double)getPageSheetContentHeight;
- (void)initUI;
- (void)pageSheetWillCloseWithType:(long long)arg1;
- (void)setupPageSheetConfig;
- (unsigned long long)selectedIndex;
- (void)selectItemAtIndex:(unsigned long long)arg1;
- (id)initWithConfig:(id)arg1 items:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

