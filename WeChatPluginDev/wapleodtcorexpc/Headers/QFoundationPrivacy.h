//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QFoundationPrivacy : NSObject
{
    _Bool _toReplaceInlandDomain;
    _Bool _isAgreed;
    NSString *_identifier;
    NSString *_appVersion;
    NSString *_hardWare;
    double _scale;
    struct _opaque_pthread_rwlock_t _readWriteLock;
}

+ (id)singleton;
- (void).cxx_destruct;
@property(nonatomic) struct _opaque_pthread_rwlock_t readWriteLock; // @synthesize readWriteLock=_readWriteLock;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *hardWare; // @synthesize hardWare=_hardWare;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool isAgreed; // @synthesize isAgreed=_isAgreed;
- (void)dealloc;
@property(nonatomic) _Bool toReplaceInlandDomain; // @synthesize toReplaceInlandDomain=_toReplaceInlandDomain;
- (double)deviceScale;
- (id)getHardware;
- (id)getIDFV;
- (id)getUUID;
- (id)getAppIdentifier;
- (id)getAppVersion;
- (id)init;
- (_Bool)privacyAgreementStatus;
- (void)setPrivacyAgreement:(_Bool)arg1;

@end

