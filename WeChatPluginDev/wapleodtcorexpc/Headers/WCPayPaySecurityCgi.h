//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayPaySecurityCgiDelegate;

@interface WCPayPaySecurityCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayPaySecurityCgiDelegate> delegate; // @dynamic delegate;

@end

