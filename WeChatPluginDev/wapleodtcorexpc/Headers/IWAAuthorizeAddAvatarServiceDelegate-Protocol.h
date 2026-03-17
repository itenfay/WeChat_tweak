//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class OauthAvatarInfo;

@protocol IWAAuthorizeAddAvatarServiceDelegate <NSObject>
- (void)onIWAAuthorizeAddAvatarCancel;
- (void)onIWAAuthorizeModAvatarSuccess:(OauthAvatarInfo *)arg1;
- (void)onIWAAuthorizeAddAvatarSuccess:(OauthAvatarInfo *)arg1;
@end

