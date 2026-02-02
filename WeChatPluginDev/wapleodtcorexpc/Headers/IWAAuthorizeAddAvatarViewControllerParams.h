//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OauthAvatarInfo;

@interface IWAAuthorizeAddAvatarViewControllerParams : NSObject
{
    _Bool _isEdit;
    unsigned int _sessionId;
    OauthAvatarInfo *_editedAvatarInfo;
    NSString *_appId;
    NSString *_defaultAvatarUrl;
    NSString *_defaultAvatarFileId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *defaultAvatarFileId; // @synthesize defaultAvatarFileId=_defaultAvatarFileId;
@property(copy, nonatomic) NSString *defaultAvatarUrl; // @synthesize defaultAvatarUrl=_defaultAvatarUrl;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) OauthAvatarInfo *editedAvatarInfo; // @synthesize editedAvatarInfo=_editedAvatarInfo;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;

@end

