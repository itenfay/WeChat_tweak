//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel;

@interface WCPayBankCardNumberItem
{
    UILabel *m_bankcardLabel;
    NSString *m_value;
    _Bool m_isUnselectable;
    NSString *m_starBankNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_starBankNumber; // @synthesize m_starBankNumber;
- (void)clearItem;
- (void)setBankCardNumber:(id)arg1 starBankNumber:(id)arg2;
- (id)getValue;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;

@end

