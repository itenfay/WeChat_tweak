//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLimitedModeAuthorizationUtilLogic, NSString, WAContact;
@protocol WALimitModeHelperDelegate;

@interface WALimitModeHelper : NSObject
{
    MMLimitedModeAuthorizationUtilLogic *_utilLogic;
    WAContact *_pendingContact;
    id <WALimitModeHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WALimitModeHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAContact *pendingContact; // @synthesize pendingContact=_pendingContact;
@property(retain, nonatomic) MMLimitedModeAuthorizationUtilLogic *utilLogic; // @synthesize utilLogic=_utilLogic;
- (void)onVerifyCancelWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)onVerifyPasswordSuccessWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)sendVerifiedResult:(id)arg1 bizType:(long long)arg2 isVerified:(_Bool)arg3;
- (_Bool)tryBlockedByLimitModeWithContact:(id)arg1 inNavVC:(id)arg2;
- (id)genLimitedModeBizKeyWithAppId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

