//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UIView, WCPayControlData, WCPayPhoneTextItem;
@protocol WCPayCountryCodeAndPhoneNumberItemDelegate;

@interface WCPayCountryCodeAndPhoneNumberItem
{
    _Bool _bIsAutoFill;
    WCPayControlData *_data;
    id <WCPayCountryCodeAndPhoneNumberItemDelegate> _delegate;
    WCPayPhoneTextItem *_phoneTextItem;
    WCPayPhoneTextItem *_countryCodeTextItem;
    UILabel *_plusLabel;
    UIView *_separator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsAutoFill; // @synthesize bIsAutoFill=_bIsAutoFill;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *plusLabel; // @synthesize plusLabel=_plusLabel;
@property(retain, nonatomic) WCPayPhoneTextItem *countryCodeTextItem; // @synthesize countryCodeTextItem=_countryCodeTextItem;
@property(retain, nonatomic) WCPayPhoneTextItem *phoneTextItem; // @synthesize phoneTextItem=_phoneTextItem;
@property(nonatomic) __weak id <WCPayCountryCodeAndPhoneNumberItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayControlData *data; // @synthesize data=_data;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)resignFirstResponder;
- (void)showDetailTip;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;
- (void)setCountryCodeItemIsValid:(_Bool)arg1;
- (void)setCountryCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

