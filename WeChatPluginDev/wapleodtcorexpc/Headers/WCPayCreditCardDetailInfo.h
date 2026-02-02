//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCreditCardDetailInfo : NSObject
{
    NSString *m_nsCardNo;
    NSString *m_nsValidThru;
    NSString *m_nsCVV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsValidThru; // @synthesize m_nsValidThru;
@property(retain, nonatomic) NSString *m_nsCVV; // @synthesize m_nsCVV;
@property(retain, nonatomic) NSString *m_nsCardNo; // @synthesize m_nsCardNo;

@end

