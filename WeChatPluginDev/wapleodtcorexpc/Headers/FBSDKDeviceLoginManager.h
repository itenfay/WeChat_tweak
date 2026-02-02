//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKDeviceLoginCodeInfo, NSArray, NSNetService, NSString, NSURL;
@protocol FBSDKDeviceLoginManagerDelegate;

@interface FBSDKDeviceLoginManager : NSObject
{
    FBSDKDeviceLoginCodeInfo *_codeInfo;
    _Bool _isCancelled;
    NSNetService *_loginAdvertisementService;
    _Bool _isSmartLoginEnabled;
    id <FBSDKDeviceLoginManagerDelegate> _delegate;
    NSArray *_permissions;
    NSURL *_redirectURL;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly, copy, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(nonatomic) __weak id <FBSDKDeviceLoginManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)_schedulePoll:(unsigned long long)arg1;
- (void)_processError:(id)arg1;
- (void)_notifyToken:(id)arg1;
- (void)_notifyError:(id)arg1;
- (void)cancel;
- (void)start;
- (id)initWithPermissions:(id)arg1 enableSmartLogin:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

