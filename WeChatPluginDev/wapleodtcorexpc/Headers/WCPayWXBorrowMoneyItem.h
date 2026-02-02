//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayWXBorrowMoneyItem : NSObject
{
    int m_enWCPayWXBorrowMoneyItemStatus;
    NSString *m_nsToOpenTitle;
    NSString *m_nsRedirectUrl;
    NSString *m_nsBankType;
    NSString *m_nsBankName;
    NSString *m_nsBankLogoUrl;
    NSString *m_nsBankBgUrl;
    NSString *m_nsBankMasterUrl;
    NSString *m_nsIsOverDue;
    NSString *m_nsAvailableOtb;
    unsigned int m_uiRedCodIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiRedCodIndex; // @synthesize m_uiRedCodIndex;
@property(retain, nonatomic) NSString *m_nsBankMasterUrl; // @synthesize m_nsBankMasterUrl;
@property(retain, nonatomic) NSString *m_nsBankBgUrl; // @synthesize m_nsBankBgUrl;
@property(retain, nonatomic) NSString *m_nsToOpenTitle; // @synthesize m_nsToOpenTitle;
@property(retain, nonatomic) NSString *m_nsRedirectUrl; // @synthesize m_nsRedirectUrl;
@property(retain, nonatomic) NSString *m_nsIsOverDue; // @synthesize m_nsIsOverDue;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSString *m_nsBankName; // @synthesize m_nsBankName;
@property(retain, nonatomic) NSString *m_nsBankLogoUrl; // @synthesize m_nsBankLogoUrl;
@property(retain, nonatomic) NSString *m_nsAvailableOtb; // @synthesize m_nsAvailableOtb;
@property(nonatomic) int m_enWCPayWXBorrowMoneyItemStatus; // @synthesize m_enWCPayWXBorrowMoneyItemStatus;

@end

