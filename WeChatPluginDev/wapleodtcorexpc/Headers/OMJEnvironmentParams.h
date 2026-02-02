//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJEnvironmentParams : NSObject
{
    _Bool _createDirectoryIfNotExist;
    NSString *_persistentDirectory;
    NSString *_cachesDirectory;
    NSString *_temporaryDirectory;
    NSString *_resourcesDirectory;
    NSString *_clipBundleDirectory;
    NSString *_localeID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localeID; // @synthesize localeID=_localeID;
@property(readonly, nonatomic) _Bool createDirectoryIfNotExist; // @synthesize createDirectoryIfNotExist=_createDirectoryIfNotExist;
@property(readonly, copy, nonatomic) NSString *clipBundleDirectory; // @synthesize clipBundleDirectory=_clipBundleDirectory;
@property(readonly, copy, nonatomic) NSString *resourcesDirectory; // @synthesize resourcesDirectory=_resourcesDirectory;
@property(readonly, copy, nonatomic) NSString *temporaryDirectory; // @synthesize temporaryDirectory=_temporaryDirectory;
@property(readonly, copy, nonatomic) NSString *cachesDirectory; // @synthesize cachesDirectory=_cachesDirectory;
@property(readonly, copy, nonatomic) NSString *persistentDirectory; // @synthesize persistentDirectory=_persistentDirectory;
- (id)initWithPersistentDirectory:(id)arg1 cachesDirectory:(id)arg2 temporaryDirectory:(id)arg3 resourcesDirectory:(id)arg4 clipBundleDirectory:(id)arg5 createDirectoryIfNotExist:(_Bool)arg6 localeID:(id)arg7;
- (id)initWithPersistentDirectory:(id)arg1 cachesDirectory:(id)arg2 temporaryDirectory:(id)arg3 resourcesDirectory:(id)arg4 createDirectoryIfNotExist:(_Bool)arg5 localeID:(id)arg6;

@end

