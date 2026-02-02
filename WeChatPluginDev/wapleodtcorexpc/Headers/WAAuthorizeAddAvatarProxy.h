//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol IWAAuthorizeAddAvatarServiceDelegate;

@interface WAAuthorizeAddAvatarProxy : NSObject
{
    id <IWAAuthorizeAddAvatarServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IWAAuthorizeAddAvatarServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelAddAvatar;
- (void)onModAvatarSuccess:(id)arg1;
- (void)onAddAvatarSuccess:(id)arg1;
- (id)authorizeAddAvatarViewControllerWithParams:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

