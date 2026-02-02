//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TranslateLinkReq, TranslateLinkResp;

@interface TranslateLinkCacheWrap
{
    TranslateLinkReq *_req;
    TranslateLinkResp *_resp;
}

+ (id)cacheWrapWithReq:(id)arg1 andResp:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_resp;
+ (void)PBArrayAdd_req;
- (void).cxx_destruct;
@property(retain, nonatomic) TranslateLinkResp *resp; // @synthesize resp=_resp;
@property(retain, nonatomic) TranslateLinkReq *req; // @synthesize req=_req;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

