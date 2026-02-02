//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUINavigationController, NSString, NSURL, OpenApiParameter;

@interface OpenRankListHandler
{
    OpenApiParameter *_parameter;
    NSURL *_url;
    MMUINavigationController *_navigationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)removeAuthViewController;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)doAuth;
- (void)onPreEnterWechatDone;
- (void)openRankList;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)cancelOpenRankList;
- (void)startAuth;
- (void)startHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

