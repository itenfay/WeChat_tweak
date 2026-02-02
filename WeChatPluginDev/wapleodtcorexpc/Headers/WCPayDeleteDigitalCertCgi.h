//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayIdKeyRegularReporter;
@protocol WCPayDeleteDigitalCertCgiDelegate;

@interface WCPayDeleteDigitalCertCgi : NSObject
{
    NSString *_m_crtNo;
    id <WCPayDeleteDigitalCertCgiDelegate> _m_delegate;
    WCPayIdKeyRegularReporter *_m_cgiReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayIdKeyRegularReporter *m_cgiReporter; // @synthesize m_cgiReporter=_m_cgiReporter;
@property(nonatomic) __weak id <WCPayDeleteDigitalCertCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_crtNo; // @synthesize m_crtNo=_m_crtNo;
- (void)localCertDeleteWithCertNo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (void)callErrorDelegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

