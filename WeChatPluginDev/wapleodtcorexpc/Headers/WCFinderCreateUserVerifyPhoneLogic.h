//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AnyPromise, FinderNewUserPrepareResponse, NSString, WCAccountBindPhoneControlLogic;

@interface WCFinderCreateUserVerifyPhoneLogic : NSObject
{
    AnyPromise *_userPreparePromise;
    WCAccountBindPhoneControlLogic *_bindPhoneLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountBindPhoneControlLogic *bindPhoneLogic; // @synthesize bindPhoneLogic=_bindPhoneLogic;
@property(retain, nonatomic) AnyPromise *userPreparePromise; // @synthesize userPreparePromise=_userPreparePromise;
- (void)verifyBindPhoneFromVC:(id)arg1;
- (void)startRequestPrepareResponse;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepare;
- (id)initWithUserPrepare:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

