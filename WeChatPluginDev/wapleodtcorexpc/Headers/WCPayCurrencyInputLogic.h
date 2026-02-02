//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSString;
@protocol WCPayCurrencyInputLogicDelegate;

@interface WCPayCurrencyInputLogic : NSObject
{
    unsigned int _m_maxLength;
    id <WCPayCurrencyInputLogicDelegate> _m_delegate;
    NSRegularExpression *_m_pattern;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRegularExpression *m_pattern; // @synthesize m_pattern=_m_pattern;
@property(nonatomic) unsigned int m_maxLength; // @synthesize m_maxLength=_m_maxLength;
@property(nonatomic) __weak id <WCPayCurrencyInputLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)isNumeric:(id)arg1;
- (void)callDelegateString:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)initWithDelegate:(id)arg1 MaxLength:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

