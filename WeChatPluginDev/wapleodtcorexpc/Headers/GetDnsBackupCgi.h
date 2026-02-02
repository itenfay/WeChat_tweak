//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class Get3rdDnsReq;

@interface GetDnsBackupCgi
{
    struct weak_ptr<mars::cdn::Get3rdDnsCallback> callback_;
    Get3rdDnsReq *get3rdDnsReq;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) Get3rdDnsReq *get3rdDnsReq; // @synthesize get3rdDnsReq;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1;
- (void)setCallback:(shared_ptr_5585d7e6)arg1;
- (id)init;

@end

