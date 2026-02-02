//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FBSDKLoginManager;

@interface FacebookAuth
{
    long long m_uiFacebookUsageType;
    FBSDKLoginManager *m_fbLogin;
}

+ (void)asyncGetMeInfoWithSize:(struct CGSize)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)tryInitSDK;
- (void).cxx_destruct;
@property(nonatomic) long long m_uiFacebookUsageType; // @synthesize m_uiFacebookUsageType;
- (void)reAuth;
- (void)requestNewPermission;
- (void)tryAuth;
- (id)getAccessToken;
- (void)fbDidExtendToken;
- (void)fbDidNotLogin:(_Bool)arg1;
- (void)fbDidLogin;
- (id)init;

@end

