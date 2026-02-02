//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat14WALaunchParams : NSObject
{
    MISSING_TYPE *username;
    MISSING_TYPE *appid;
    MISSING_TYPE *pagePath;
    MISSING_TYPE *appVersion;
    MISSING_TYPE *debugMode;
    MISSING_TYPE *scene;
    MISSING_TYPE *sceneNote;
    MISSING_TYPE *userScriptReadyCallback;
}

- (void).cxx_destruct;
- (void)registerUserScriptReadyCallbackWithCallback:(CDUnknownBlockType)arg1;
- (id)init;
@property(nonatomic, copy) CDUnknownBlockType userScriptReadyCallback;
@property(nonatomic, copy) NSString *sceneNote;
@property(nonatomic) unsigned long long scene; // @synthesize scene;
@property(nonatomic) unsigned long long debugMode; // @synthesize debugMode;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion;
@property(nonatomic, copy) NSString *pagePath;
@property(nonatomic, copy) NSString *appid;
@property(nonatomic, copy) NSString *username;

@end

