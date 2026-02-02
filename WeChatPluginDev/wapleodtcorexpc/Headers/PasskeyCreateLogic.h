//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, PasskeyEntitlementProvider;
@protocol PasskeyCreateDelegate;

@interface PasskeyCreateLogic
{
    _Bool _passkeyExists;
    _Bool _passkeySwitch;
    id <PasskeyCreateDelegate> _delegate;
    NSData *_passkeyUserID;
    NSString *_passkeyUserName;
    PasskeyEntitlementProvider *_provider;
    NSString *_verifyID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *verifyID; // @synthesize verifyID=_verifyID;
@property(retain, nonatomic) PasskeyEntitlementProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSString *passkeyUserName; // @synthesize passkeyUserName=_passkeyUserName;
@property(retain, nonatomic) NSData *passkeyUserID; // @synthesize passkeyUserID=_passkeyUserID;
@property(nonatomic) _Bool passkeySwitch; // @synthesize passkeySwitch=_passkeySwitch;
@property(nonatomic) _Bool passkeyExists; // @synthesize passkeyExists=_passkeyExists;
@property(nonatomic) __weak id <PasskeyCreateDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updatePasskeyCredentialId:(id)arg1;
- (void)requestBindPasskeyWithRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)passkeyDelete;
- (void)passkeyRegisterWithRawData:(id)arg1 credentialID:(id)arg2;
- (void)requestAuthorizeFromDomain;
- (void)verifyWxPassword;
- (void)requestUserIDAndUsernameWithTicket:(id)arg1;
- (void)startCreate;
- (void)updatePasskeySwitch:(_Bool)arg1;
- (id)init;

@end

