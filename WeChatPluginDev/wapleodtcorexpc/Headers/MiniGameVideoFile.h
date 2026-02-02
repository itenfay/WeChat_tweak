//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MiniGameVideoFile : NSObject
{
    unsigned int _appVersion;
    unsigned int _appState;
    unsigned int _isDevEdited;
    NSString *_appId;
    NSString *_appName;
    NSString *_absFilePath;
    NSString *_configJson;
    NSString *_title;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int isDevEdited; // @synthesize isDevEdited=_isDevEdited;
@property(nonatomic) unsigned int appState; // @synthesize appState=_appState;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *configJson; // @synthesize configJson=_configJson;
@property(copy, nonatomic) NSString *absFilePath; // @synthesize absFilePath=_absFilePath;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)initFromLocalVideoInfo:(id)arg1;

@end

