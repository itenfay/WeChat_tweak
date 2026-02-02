//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BlockViewController, NSDictionary, NSString, OpenApiParameter;

@interface BaseOpenSDKHandler
{
    OpenApiParameter *_parameter;
    BlockViewController *_blockView;
    NSDictionary *_linkMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *linkMap; // @synthesize linkMap=_linkMap;
@property(retain, nonatomic) BlockViewController *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)onBlockViewControllerReturn;
- (void)onPreEnterWechatDone;
- (void)didNeedRefreshToken:(id)arg1;
- (void)sendRespAndReturnTo3rdApp:(id)arg1 errCode:(int)arg2;
- (id)getExtTaransLinkParams;
- (void)realHandleReqAfterermissionValidation;
- (void)startPermissionValidation;
- (void)cancelHandler;
- (void)startHandler:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

