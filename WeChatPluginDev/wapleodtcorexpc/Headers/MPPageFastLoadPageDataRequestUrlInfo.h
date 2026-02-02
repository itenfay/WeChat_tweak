//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MPPageFastLoadPageDataRequestUrlInfo : NSObject
{
    _Bool _isOfflineCache;
    unsigned int _templateType;
    unsigned int _scene;
    unsigned int _enterType;
    unsigned int _lastModifyTime;
    NSString *_url;
    NSString *_identity;
}

+ (id)generateRequestUrlInfoIfSupport:(_Bool)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3 scene:(unsigned int)arg4 enterType:(unsigned int)arg5 isOfflineCache:(_Bool)arg6;
+ (id)generateRequestUrlInfoIfSupport:(_Bool)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3 scene:(unsigned int)arg4 enterType:(unsigned int)arg5;
+ (id)generateRequestUrlInfoWithForwardUrl:(id)arg1 scene:(unsigned int)arg2 enterType:(unsigned int)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) _Bool isOfflineCache; // @synthesize isOfflineCache=_isOfflineCache;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;
@property(readonly, copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)description;

@end

