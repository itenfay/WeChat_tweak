//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString;
@protocol IWAAuthorizeAddAvatarService;

@interface WAJSEventHandler_createVestUser
{
    NSObject<IWAAuthorizeAddAvatarService> *_addAvatarService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<IWAAuthorizeAddAvatarService> *addAvatarService; // @synthesize addAvatarService=_addAvatarService;
- (void)onIWAAuthorizeAddAvatarCancel;
- (void)onIWAAuthorizeModAvatarSuccess:(id)arg1;
- (void)onIWAAuthorizeAddAvatarSuccess:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

