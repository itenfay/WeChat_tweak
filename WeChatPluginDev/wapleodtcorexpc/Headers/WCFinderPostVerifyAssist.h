//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AnyPromise, NSString, WCFinderContact;

@interface WCFinderPostVerifyAssist : NSObject
{
    WCFinderContact *_contact;
    AnyPromise *_userPrepare;
}

+ (id)assistWithContact:(id)arg1 userPrepareResponse:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) AnyPromise *userPrepare; // @synthesize userPrepare=_userPrepare;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (_Bool)isContactLogout;
- (_Bool)isRealName;
- (void)onFinderUserPageContactInfoUpdate:(id)arg1;
- (void)_afterRealNameVerity:(id)arg1;
- (void)showForeignRealNameH5Verify:(id)arg1 realNameInfo:(id)arg2;
- (void)showForeignRealNameVerifyTips:(id)arg1 realNameInfo:(id)arg2;
- (void)OnRealnameVerfitySuccessNotification:(id)arg1;
- (void)startEnterpriseVerity;
- (void)startRealNameVerity;
- (void)showRealNameVerityPicker;
- (void)showVerityPicker;
- (void)tryContinuePostFromDelegateVC:(id)arg1;
- (void)startRequestPrepareResponse;
- (void)dealloc;
- (id)userPrepareResponse;
- (void)fetchOrWatiPrepare:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

