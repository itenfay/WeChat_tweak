//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayOfflinePayQueryUserResponseStruct : NSObject
{
    long long m_uiLimitFee;
    _Bool m_bNeedLoadingAndSuccessInfo;
    _Bool _offlinePayPauseFlag;
    _Bool _offlinePayForceGetToken;
    long long _payAmount;
    long long _payNumber;
    NSArray *_cardIcons;
    NSString *_offlinePayPauseWord;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool offlinePayForceGetToken; // @synthesize offlinePayForceGetToken=_offlinePayForceGetToken;
@property(copy, nonatomic) NSString *offlinePayPauseWord; // @synthesize offlinePayPauseWord=_offlinePayPauseWord;
@property(nonatomic) _Bool offlinePayPauseFlag; // @synthesize offlinePayPauseFlag=_offlinePayPauseFlag;
@property(retain, nonatomic) NSArray *cardIcons; // @synthesize cardIcons=_cardIcons;
@property(nonatomic) long long payNumber; // @synthesize payNumber=_payNumber;
@property(nonatomic) long long payAmount; // @synthesize payAmount=_payAmount;
@property(nonatomic) _Bool m_bNeedLoadingAndSuccessInfo; // @synthesize m_bNeedLoadingAndSuccessInfo;
@property(nonatomic) long long m_uiLimitFee; // @synthesize m_uiLimitFee;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

