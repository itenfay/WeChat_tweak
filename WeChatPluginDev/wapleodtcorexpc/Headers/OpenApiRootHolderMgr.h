//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OpenApiParameter, WapPayParameter;

@interface OpenApiRootHolderMgr
{
    OpenApiParameter *_openApiParameter;
    WapPayParameter *_wapPayParameter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WapPayParameter *wapPayParameter; // @synthesize wapPayParameter=_wapPayParameter;
@property(retain, nonatomic) OpenApiParameter *openApiParameter; // @synthesize openApiParameter=_openApiParameter;
- (void)dealloc;
- (void)clearWapPayParameter;
- (void)storeWapPayParameter:(id)arg1;
- (void)clearOpenApiParameter;
- (void)storeOpenApiParameter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

