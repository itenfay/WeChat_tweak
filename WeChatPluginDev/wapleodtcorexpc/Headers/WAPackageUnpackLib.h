//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPackageUnpackLib : NSObject
{
    void *_unpackLib;
    NSString *_appId;
    unsigned long long _debugModeType;
    unsigned long long _version;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long debugModeType; // @synthesize debugModeType=_debugModeType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) void *unpackLib; // @synthesize unpackLib=_unpackLib;
- (void)dealloc;
- (id)getFileContent:(id)arg1 error:(id *)arg2;
- (id)initWithAppId:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3;

@end

