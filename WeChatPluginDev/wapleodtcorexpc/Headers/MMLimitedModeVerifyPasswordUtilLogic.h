//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLimitedModeVerifyPasswordLogic, MMUIViewController, NSString;
@protocol MMLimitedModeVerifyPasswordUtilLogicDelegate;

@interface MMLimitedModeVerifyPasswordUtilLogic : NSObject
{
    MMLimitedModeVerifyPasswordLogic *m_limitedModeVerifyPasswordLogic;
    unsigned int m_scene;
    _Bool m_isLoading;
    id <MMLimitedModeVerifyPasswordUtilLogicDelegate> _m_delegate;
    MMUIViewController *_vc;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) __weak id <MMLimitedModeVerifyPasswordUtilLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)onCheckPasswordExist:(_Bool)arg1 isNeverUse:(_Bool)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)doCheckLimitedModeVerifyPasswordInViewController:(id)arg1;
- (void)goToSetLimitedModeViewController:(id)arg1 scene:(unsigned int)arg2;
- (void)startCheckLimitedModeVerifyPasswordInViewController:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

