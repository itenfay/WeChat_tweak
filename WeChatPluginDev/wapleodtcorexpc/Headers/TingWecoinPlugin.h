//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenMembershipJoinInfo_WecoinSchemeInfo_PackageInfo, MMListenMembershipJoinResponse, NSString, _TtC6WeChat26WCCoinSubscribeMemberLogic;

@interface TingWecoinPlugin : NSObject
{
    _TtC6WeChat26WCCoinSubscribeMemberLogic *_wecoinLogic;
    MMListenMembershipJoinInfo_WecoinSchemeInfo_PackageInfo *_selectedPackage;
    MMListenMembershipJoinResponse *_joinResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMListenMembershipJoinResponse *joinResp; // @synthesize joinResp=_joinResp;
@property(retain, nonatomic) MMListenMembershipJoinInfo_WecoinSchemeInfo_PackageInfo *selectedPackage; // @synthesize selectedPackage=_selectedPackage;
@property(retain, nonatomic) _TtC6WeChat26WCCoinSubscribeMemberLogic *wecoinLogic; // @synthesize wecoinLogic=_wecoinLogic;
- (void)getOrderBuffWithPriceTier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)joinWithPackage:(id)arg1 subcriptionExtInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showWecoinSubscribeView:(id)arg1 sessionId:(id)arg2 scene:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showWecoinSubscribeViewRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
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

