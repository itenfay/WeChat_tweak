//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSDecimalNumber, NSString;

@interface SimplePKPass : NSObject
{
    _Bool _isRemotePass;
    _Bool _isInStation;
    _Bool _isBlacklisted;
    unsigned int _passActivationState;
    NSString *_primaryAccountIdentifier;
    NSString *_primaryAccountNumberSuffix;
    NSString *_deviceAccountIdentifier;
    NSString *_deviceAccountNumberSuffix;
    NSString *_devicePassIdentifier;
    NSString *_pairedTerminalIdentifier;
    NSDecimalNumber *_transitBalance;
    NSString *_transitBalanceCurrencyCode;
    NSDate *_expirationDate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) _Bool isBlacklisted; // @synthesize isBlacklisted=_isBlacklisted;
@property(nonatomic) _Bool isInStation; // @synthesize isInStation=_isInStation;
@property(copy, nonatomic) NSString *transitBalanceCurrencyCode; // @synthesize transitBalanceCurrencyCode=_transitBalanceCurrencyCode;
@property(copy, nonatomic) NSDecimalNumber *transitBalance; // @synthesize transitBalance=_transitBalance;
@property(nonatomic) _Bool isRemotePass; // @synthesize isRemotePass=_isRemotePass;
@property(copy, nonatomic) NSString *pairedTerminalIdentifier; // @synthesize pairedTerminalIdentifier=_pairedTerminalIdentifier;
@property(copy, nonatomic) NSString *devicePassIdentifier; // @synthesize devicePassIdentifier=_devicePassIdentifier;
@property(nonatomic) unsigned int passActivationState; // @synthesize passActivationState=_passActivationState;
@property(retain, nonatomic) NSString *deviceAccountNumberSuffix; // @synthesize deviceAccountNumberSuffix=_deviceAccountNumberSuffix;
@property(retain, nonatomic) NSString *deviceAccountIdentifier; // @synthesize deviceAccountIdentifier=_deviceAccountIdentifier;
@property(copy, nonatomic) NSString *primaryAccountNumberSuffix; // @synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix;
@property(copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
- (id)initWithPKPass:(id)arg1 withBalance:(_Bool)arg2;

@end

