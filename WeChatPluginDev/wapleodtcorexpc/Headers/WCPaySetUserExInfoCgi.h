//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCPaySetUserExInfoCgiRequest;
@protocol WCPaySetUserExInfoCgiDelegate;

@interface WCPaySetUserExInfoCgi
{
    WCPaySetUserExInfoCgiRequest *_cgiRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPaySetUserExInfoCgiRequest *cgiRequest; // @synthesize cgiRequest=_cgiRequest;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPaySetUserExInfoCgiDelegate> delegate; // @dynamic delegate;

@end

