//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderGetMentionListCGIParams;

@interface WCFinderGetMentionListCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    WCFinderGetMentionListCGIParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGetMentionListCGIParams *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithParams:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

