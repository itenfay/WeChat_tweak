//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderClientStatus, WCFinderUserPageParams;

@interface WCFinderUserPageCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    FinderClientStatus *_clientStatus;
    WCFinderUserPageParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderUserPageParams *params; // @synthesize params=_params;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithParams:(id)arg1 clientStatus:(id)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

