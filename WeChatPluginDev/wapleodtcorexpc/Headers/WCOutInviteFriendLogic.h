//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetWeChatOutCouponsResponse, NSString;
@protocol WCOutInviteFriendLogicDelegate;

@interface WCOutInviteFriendLogic : NSObject
{
    id <WCOutInviteFriendLogicDelegate> _delegate;
    GetWeChatOutCouponsResponse *_couponResponse;
    unsigned long long _scene;
    unsigned long long _getBalanceScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long getBalanceScene; // @synthesize getBalanceScene=_getBalanceScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) GetWeChatOutCouponsResponse *couponResponse; // @synthesize couponResponse=_couponResponse;
@property(nonatomic) __weak id <WCOutInviteFriendLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getInvalidDateTips;
- (id)getRemainingTime;
- (void)didReceiveCouponResponse:(id)arg1;
- (void)requestCoupon;
- (id)initWithDelegate:(id)arg1 inviteScene:(unsigned long long)arg2 getBalanceScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

