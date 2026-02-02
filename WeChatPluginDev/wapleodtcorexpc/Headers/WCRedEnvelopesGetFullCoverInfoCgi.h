//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;
@protocol WCRedEnvelopesGetFullCoverInfoCgiDelegate;

@interface WCRedEnvelopesGetFullCoverInfoCgi
{
    id <WCRedEnvelopesGetFullCoverInfoCgiDelegate> _cgiDelegate;
    CMessageWrap *_messageWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(nonatomic) __weak id <WCRedEnvelopesGetFullCoverInfoCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1 messageWrap:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

