//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAuthorizeResultInfo : NSObject
{
    _Bool _isAcceptUserPrivacyProtectInfo;
    unsigned int _avatarId;
    unsigned int _avatarOpt;
    unsigned long long _scopeId;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAcceptUserPrivacyProtectInfo; // @synthesize isAcceptUserPrivacyProtectInfo=_isAcceptUserPrivacyProtectInfo;
@property(nonatomic) unsigned int avatarOpt; // @synthesize avatarOpt=_avatarOpt;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long scopeId; // @synthesize scopeId=_scopeId;
@property(nonatomic) unsigned int avatarId; // @synthesize avatarId=_avatarId;
- (id)init;

@end

