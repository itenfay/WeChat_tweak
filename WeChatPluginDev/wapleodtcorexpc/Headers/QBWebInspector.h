//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface QBWebInspector : NSObject
{
    NSMutableArray *_webpages;
    NSMutableDictionary *_statusInfo;
    NSMutableArray *_pageIDsForUpload;
    NSMutableArray *_pageIDsHasUploaded;
    NSString *_fileName;
}

+ (id)JSONInfoWithDetail:(_Bool)arg1 shouldUpload:(_Bool)arg2;
+ (void)uploadLogWithPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)uploadWithBusinessID:(id)arg1 log:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)uploadAllLogsWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)uploadWithDetail:(_Bool)arg1 triggerURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)saveToFile;
+ (id)filePathForWebLogs;
+ (id)sortedFilePathsForSubPaths:(id)arg1;
+ (void)startSpeedTestWithCompletion:(CDUnknownBlockType)arg1;
+ (id)businessIDForWebInspectorURL:(id)arg1;
+ (_Bool)isWebInspectorURL:(id)arg1;
+ (void)addStatusWithKey:(id)arg1 value:(id)arg2 allowDuplicateKey:(_Bool)arg3;
+ (void)addEvent:(id)arg1 forRequest:(id)arg2;
+ (id)webItemWithURL:(id)arg1 pageURL:(id)arg2;
+ (id)webpageWithURL:(id)arg1;
+ (_Bool)saveWebpagesToFile;
+ (void)addWebItemEvent:(id)arg1;
+ (void)loadStatusAndCheckWebpageVaildation;
+ (id)networkDescriptionWithStatus:(long long)arg1;
+ (_Bool)validationCheckForEvent:(id)arg1;
+ (void)initialize;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain) NSMutableArray *pageIDsHasUploaded; // @synthesize pageIDsHasUploaded=_pageIDsHasUploaded;
@property(retain) NSMutableArray *pageIDsForUpload; // @synthesize pageIDsForUpload=_pageIDsForUpload;
@property(retain) NSMutableDictionary *statusInfo; // @synthesize statusInfo=_statusInfo;
@property(retain) NSMutableArray *webpages; // @synthesize webpages=_webpages;
- (void).cxx_destruct;

@end

