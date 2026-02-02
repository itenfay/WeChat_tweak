//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface QEngineResourceManager : NSObject
{
    NSString *_optionalResourcePath;
    NSString *_configDirectoryPath;
    NSBundle *_QMapKitBundle;
    NSString *_businessKey;
}

+ (id)defaultConfigDirectoryPath;
+ (id)roadEventDataOnlineDirectoryPath;
+ (id)worldmapOnlineDirectoryPath;
+ (id)satelliteOnlineDirectoryPath;
+ (id)engineLogDirectoryPath;
+ (id)vectorDataOnlineDirectoryPath;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(retain, nonatomic) NSBundle *QMapKitBundle; // @synthesize QMapKitBundle=_QMapKitBundle;
@property(copy, nonatomic) NSString *configDirectoryPath; // @synthesize configDirectoryPath=_configDirectoryPath;
@property(copy, nonatomic) NSString *optionalResourcePath; // @synthesize optionalResourcePath=_optionalResourcePath;
- (id)initWithBusinessKey:(id)arg1;
- (void)setupConfigDirectoryWithBusinessKey:(id)arg1;
- (void)setupBundle;
- (_Bool)checkConfigFileMD5:(id)arg1;
- (_Bool)compareResourceVersion:(id)arg1 cacheVersionDict:(id)arg2;
- (_Bool)shouldOverwrite:(id)arg1;
- (id)localVersionPlistPath;
- (void)copyConfigResource;
- (_Bool)fileNameShouldBeCopied:(id)arg1 shouldBeDeletedInConfig:(_Bool *)arg2;

@end

