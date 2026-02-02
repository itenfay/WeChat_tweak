//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, RealNameNewWordingSection, TPIDKeyboardView, UIButton, UILabel, WCBaseTextFieldItem, WCPayAddressItem, WCPayCountryCodeItem, WCPayCredTypeItem, WCPayGetProfessionItemV2, WCPayRealnameViewData, WCPaySelectCountItemV2, WCPaySelectDateItemV2, WCPaySelectGenderItem;
@protocol WCPayRealnameInfoViewV2Delegate;

@interface WCPayRealnameInfoViewV2 : UIView
{
    _Bool _needChangeContentMaxSize;
    NSString *_title;
    NSString *_desc;
    UIView *_baseGrowView;
    UIView *_growView;
    UIView *_headerView;
    UILabel *_titleView;
    UILabel *_descLabel;
    WCBaseTextFieldItem *_nameView;
    WCPayCredTypeItem *_holderIDTypeView;
    WCBaseTextFieldItem *_holderIdView;
    WCPayAddressItem *_areaView;
    WCPayGetProfessionItemV2 *_professionView;
    WCPaySelectDateItemV2 *_birthView;
    WCPaySelectDateItemV2 *_effectView;
    WCPaySelectDateItemV2 *_expireView;
    WCPaySelectCountItemV2 *_renewView;
    WCPaySelectGenderItem *_genderView;
    WCPayCountryCodeItem *_nationView;
    WCBaseTextFieldItem *_phoneView;
    UIView *_footerView;
    UIButton *_nextButton;
    double _minHeight;
    double _headerContentHeight;
    NSString *_name;
    id <WCPayRealnameInfoViewV2Delegate> _m_delegate;
    WCPayRealnameViewData *_viewData;
    RealNameNewWordingSection *_currentSession;
    NSMutableArray *_itemArray;
    TPIDKeyboardView *_keyboard;
    double _leftTitleMinWidth;
    double _leftTitleMaxWidth;
    NSMutableArray *_lineArray;
    struct CGPoint _currentOffset;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *lineArray; // @synthesize lineArray=_lineArray;
@property double leftTitleMaxWidth; // @synthesize leftTitleMaxWidth=_leftTitleMaxWidth;
@property double leftTitleMinWidth; // @synthesize leftTitleMinWidth=_leftTitleMinWidth;
@property struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain) TPIDKeyboardView *keyboard; // @synthesize keyboard=_keyboard;
@property(retain) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain) RealNameNewWordingSection *currentSession; // @synthesize currentSession=_currentSession;
@property(retain) WCPayRealnameViewData *viewData; // @synthesize viewData=_viewData;
@property __weak id <WCPayRealnameInfoViewV2Delegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain) NSString *name; // @synthesize name=_name;
@property _Bool needChangeContentMaxSize; // @synthesize needChangeContentMaxSize=_needChangeContentMaxSize;
@property double headerContentHeight; // @synthesize headerContentHeight=_headerContentHeight;
@property double minHeight; // @synthesize minHeight=_minHeight;
@property(retain) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) WCBaseTextFieldItem *phoneView; // @synthesize phoneView=_phoneView;
@property(retain) WCPayCountryCodeItem *nationView; // @synthesize nationView=_nationView;
@property(retain) WCPaySelectGenderItem *genderView; // @synthesize genderView=_genderView;
@property(retain) WCPaySelectCountItemV2 *renewView; // @synthesize renewView=_renewView;
@property(retain) WCPaySelectDateItemV2 *expireView; // @synthesize expireView=_expireView;
@property(retain) WCPaySelectDateItemV2 *effectView; // @synthesize effectView=_effectView;
@property(retain) WCPaySelectDateItemV2 *birthView; // @synthesize birthView=_birthView;
@property(retain) WCPayGetProfessionItemV2 *professionView; // @synthesize professionView=_professionView;
@property(retain) WCPayAddressItem *areaView; // @synthesize areaView=_areaView;
@property(retain) WCBaseTextFieldItem *holderIdView; // @synthesize holderIdView=_holderIdView;
@property(retain) WCPayCredTypeItem *holderIDTypeView; // @synthesize holderIDTypeView=_holderIDTypeView;
@property(retain) WCBaseTextFieldItem *nameView; // @synthesize nameView=_nameView;
@property(retain) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *growView; // @synthesize growView=_growView;
@property(retain) UIView *baseGrowView; // @synthesize baseGrowView=_baseGrowView;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *title; // @synthesize title=_title;
- (void)didEnterBackground;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)onWCPayAddressItemMaxContentMax;
- (id)onWCPayAddressItemGetCurrentViewController;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (_Bool)buttonEnabled;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getViewController;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)updateEffectPickerFromExpireDate;
- (void)updateExpirePickerFromEffectDate;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)resignExcept:(id)arg1;
- (void)resignItem;
- (void)onClickGenderView;
- (void)onClickRenewView;
- (void)onClickExpireView;
- (void)onClickEffectView;
- (void)onClickBirthView;
- (void)onClickAreaView;
- (void)onClickProfessionView;
- (void)onClickHolderIDType;
- (void)onClickNation;
- (void)onClickNextButton;
- (void)updateNextButton;
- (void)configureBaseView:(id)arg1 option:(CDUnknownBlockType)arg2;
- (void)updateFooterView;
- (void)updatePhoneView;
- (void)updateNationView;
- (void)updateGenderView;
- (void)updateRenewView;
- (void)updateEffectView;
- (void)updateExpireView;
- (void)updateAreaView;
- (id)bannedArea;
- (void)updateBirthView;
- (long long)nowYear;
- (void)updateProfessionView;
- (void)updateHolderIdView;
- (void)updateHolderIdTypeView;
- (void)updateNameView;
- (id)baseViewWithTag:(long long)arg1 onView:(id)arg2;
- (id)viewWithTag:(long long)arg1 onView:(id)arg2;
- (void)updateDescView;
- (void)updateTitleView;
- (void)updateHeaderView;
- (id)buttonWithTag:(long long)arg1 onView:(id)arg2 accessibilityLabel:(id)arg3 action:(SEL)arg4;
- (void)addLine:(id)arg1 option:(CDUnknownBlockType)arg2 tag:(long long)arg3;
- (void)addLine:(id)arg1 option:(CDUnknownBlockType)arg2;
- (void)addUpperLine:(id)arg1 option:(CDUnknownBlockType)arg2;
- (void)onClickRightImageView:(id)arg1;
- (void)addRightImage:(id)arg1 baseView:(id)arg2 clickTag:(id)arg3;
- (void)addRightImage:(id)arg1 baseView:(id)arg2;
- (id)addTitle:(id)arg1 baseView:(id)arg2;
- (double)contentMaxWidth;
- (void)updateView;
- (id)requestTableView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithName:(id)arg1 viewData:(id)arg2 minHeight:(double)arg3 delegate:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

