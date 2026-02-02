//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class OauthAvatarInfo;

@protocol MMAuthorizeAddAvatarViewControllerDelegate <NSObject>
- (void)onModAvatarSuccess:(OauthAvatarInfo *)arg1;
- (void)onAddAvatarSuccess:(OauthAvatarInfo *)arg1;

@optional
- (void)cancelAddAvatar;
@end

