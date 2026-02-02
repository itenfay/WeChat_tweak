//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CountryCodeWrap, NSString, PhoneNumberFormatLogic, WCRedesignButtonItem, WCRedesignTextItem;
@protocol MMUIViewControllerDelegate, WCBaseInfoItemDelegate;

@interface WCFullPhoneNumInputHelper : NSObject
{
    PhoneNumberFormatLogic *_phoneNumberFormatLogic;
    id <MMUIViewControllerDelegate> _vcDelegate;
    id <WCBaseInfoItemDelegate> _itemDelegate;
    WCRedesignButtonItem *_regionButtonItem;
    WCRedesignTextItem *_phoneNumberTextItem;
    CountryCodeWrap *_countryCodeWrap;
    CDUnknownBlockType _onSetNeedsLayout;
    CDUnknownBlockType _onCountryCodeChanged;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onCountryCodeChanged; // @synthesize onCountryCodeChanged=_onCountryCodeChanged;
@property(copy, nonatomic) CDUnknownBlockType onSetNeedsLayout; // @synthesize onSetNeedsLayout=_onSetNeedsLayout;
@property(retain, nonatomic) CountryCodeWrap *countryCodeWrap; // @synthesize countryCodeWrap=_countryCodeWrap;
@property(retain, nonatomic) WCRedesignTextItem *phoneNumberTextItem; // @synthesize phoneNumberTextItem=_phoneNumberTextItem;
@property(retain, nonatomic) WCRedesignButtonItem *regionButtonItem; // @synthesize regionButtonItem=_regionButtonItem;
@property(nonatomic) __weak id <WCBaseInfoItemDelegate> itemDelegate; // @synthesize itemDelegate=_itemDelegate;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (_Bool)WCBaseInfoItemShouldBeginEditing:(id)arg1;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)showCountryCodePicker;
- (void)callSetNeedsLayout;
- (id)formatedFullPhoneNum;
- (id)countryCode;
- (id)purePhoneNum;
- (id)phoneNumText;
- (void)formatPhoneNumber;
@property(retain, nonatomic) NSString *countryISOCode; // @dynamic countryISOCode;
@property(readonly, nonatomic) PhoneNumberFormatLogic *phoneNumberFormatLogic; // @synthesize phoneNumberFormatLogic=_phoneNumberFormatLogic;
- (void)configItemsMaxTitleWidth;
- (void)config;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

