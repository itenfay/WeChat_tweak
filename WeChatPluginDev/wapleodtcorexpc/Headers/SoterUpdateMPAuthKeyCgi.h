//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol SoterUpdateMPAuthKeyCgiDelegate;

@interface SoterUpdateMPAuthKeyCgi : NSObject
{
    id <SoterUpdateMPAuthKeyCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SoterUpdateMPAuthKeyCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)callErrorDelegate;
- (void)callOkDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)elementJsonWithPublicKeyString:(id)arg1;
- (void)startRequestWithPublicKeyString:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

