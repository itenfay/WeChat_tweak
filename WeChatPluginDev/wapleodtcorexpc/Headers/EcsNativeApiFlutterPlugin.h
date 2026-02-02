//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFlutterViewController, NSString, UIView;

@interface EcsNativeApiFlutterPlugin : NSObject
{
    MMFlutterViewController *_viewController;
    CDUnknownBlockType _selectAddressCallback;
    CDUnknownBlockType _selectContactCallback;
    UIView *_parentEmbedContainerView;
    UIView *_embedContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *embedContainerView; // @synthesize embedContainerView=_embedContainerView;
@property(retain, nonatomic) UIView *parentEmbedContainerView; // @synthesize parentEmbedContainerView=_parentEmbedContainerView;
@property(copy, nonatomic) CDUnknownBlockType selectContactCallback; // @synthesize selectContactCallback=_selectContactCallback;
@property(copy, nonatomic) CDUnknownBlockType selectAddressCallback; // @synthesize selectAddressCallback=_selectAddressCallback;
@property(nonatomic) __weak MMFlutterViewController *viewController; // @synthesize viewController=_viewController;
- (void)handleChangeEndpointResp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleChangeSkuResp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableGiftPageSwipeWithError:(id *)arg1;
- (void)sendLocalGiftMessageMsgXml:(id)arg1 recipientUserName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)launchMiniProgramBundle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)onAddressEditEnd:(id)arg1;
- (id)getSearchtExtraSessionDataWithError:(id *)arg1;
- (void)launchSearchExtData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)callPayPayInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)selectContactWithCompletion:(CDUnknownBlockType)arg1;
- (void)selectAddressFromGiver:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openUrlUrl:(id)arg1 error:(id *)arg2;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

