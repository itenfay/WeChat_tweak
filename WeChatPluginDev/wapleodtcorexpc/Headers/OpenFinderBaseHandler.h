//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderBlockViewController, NSDictionary, NSString, OpenApiParameter;

@interface OpenFinderBaseHandler
{
    OpenApiParameter *_parameter;
    NSDictionary *_paramsDict;
    NSString *_openUrl;
    FinderBlockViewController *_blockVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderBlockViewController *blockVC; // @synthesize blockVC=_blockVC;
@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(retain, nonatomic) NSDictionary *paramsDict; // @synthesize paramsDict=_paramsDict;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)cancelHandler;
- (void)createOpenUrl;
- (void)sendRespTo3rdApp:(id)arg1;
- (_Bool)isParameterLegal;
- (id)genBlockVC;
- (void)startHandlerWithParameter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

