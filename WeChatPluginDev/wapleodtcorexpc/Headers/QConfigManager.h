//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, QMediator, QStatisticer;
@protocol QConfigManagerDelegate;

@interface QConfigManager : NSObject
{
    _Bool _hasStartedUpdate;
    int _unfinishedTasks;
    id <QConfigManagerDelegate> _delegate;
    QMediator *_mediator;
    QStatisticer *_statistics;
    NSString *_businessKey;
    NSString *_configDirectoryPath;
    NSString *_versionPlistPath;
    NSMutableDictionary *_versionDict;
    NSMutableDictionary *_tempVersionDict;
    NSMutableDictionary *_indoorDict;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasStartedUpdate; // @synthesize hasStartedUpdate=_hasStartedUpdate;
@property(retain, nonatomic) NSMutableDictionary *indoorDict; // @synthesize indoorDict=_indoorDict;
@property(nonatomic) int unfinishedTasks; // @synthesize unfinishedTasks=_unfinishedTasks;
@property(retain, nonatomic) NSMutableDictionary *tempVersionDict; // @synthesize tempVersionDict=_tempVersionDict;
@property(retain, nonatomic) NSMutableDictionary *versionDict; // @synthesize versionDict=_versionDict;
@property(copy, nonatomic) NSString *versionPlistPath; // @synthesize versionPlistPath=_versionPlistPath;
@property(copy, nonatomic) NSString *configDirectoryPath; // @synthesize configDirectoryPath=_configDirectoryPath;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(nonatomic) __weak QStatisticer *statistics; // @synthesize statistics=_statistics;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
@property(nonatomic) __weak id <QConfigManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupVersionDict;
- (void)setupVersionPlist;
- (id)initWithConfigPreference:(id)arg1;
- (_Bool)hasIndoorPrevilege;
- (id)getMd5KeyFromVersionKey:(id)arg1;
- (void)checkStyleIDStringChange;
- (void)constructMapConfigItems:(void *)arg1 callbacks:(id)arg2;
- (struct FileUpdateReq)constructRequestWithName:(id)arg1 key:(id)arg2;
- (id)appendParameterString;
- (id)sdkVersion;
- (id)apiKey;
- (void)statisticMapConfigFileExist;
- (void)statisticUpdateFailInfo:(id)arg1;
- (void)statisticUpdateSucceess;
- (void)onUpdateNotRequire;
- (void)onUpdateDidFailWithError:(id)arg1;
- (void)onUpdateDidFinish;
- (_Bool)saveData:(id)arg1 fileName:(id)arg2 key:(id)arg3 userData:(id)arg4;
- (void)doDownloadFile:(const void *)arg1 callback:(CDUnknownBlockType)arg2;
- (void)doCheckConfigUpdate:(const void *)arg1 checkCallback:(CDUnknownBlockType)arg2;
- (void)checkOfflineConfigUpdateWithVersion:(id)arg1 md5:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)checkConfigUpdate;
- (id)getCurrentIndoorConfigFilePath;
- (id)getCurrentConfigVersions;

@end

