//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURLSession;

@interface MPPageResourceDownloader : NSObject
{
    unsigned int _fileSequence;
    NSString *_saveDirPath;
    NSMutableDictionary *_contextDic;
    NSURLSession *_urlSession;
}

+ (id)downloadIdWithTemplateType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
+ (id)downloadIdPrefixWithTemplateType:(unsigned int)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int fileSequence; // @synthesize fileSequence=_fileSequence;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableDictionary *contextDic; // @synthesize contextDic=_contextDic;
@property(copy, nonatomic) NSString *saveDirPath; // @synthesize saveDirPath=_saveDirPath;
- (void)mainThread_onResponseWithIdentifier:(id)arg1 completionParam:(id)arg2;
- (void)setupURLSession;
- (id)parseHeaderFields:(id)arg1 targetKey:(id)arg2;
- (void)downloadTaskWithContext:(id)arg1 identifier:(id)arg2 url:(id)arg3 md5:(id)arg4 header:(id)arg5 filePath:(id)arg6 fullVersion2FilePathMap:(id)arg7;
- (id)filePathWithIdentifier:(id)arg1;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (void)cancelDownloadingTasksWithPrefix:(id)arg1;
- (_Bool)hasDownloadingTaskWithIdentifier:(id)arg1;
- (id)generateCompletionParam:(id)arg1;
- (id)completionParamWithErrorCode:(unsigned int)arg1 errorMsg:(id)arg2;
- (void)downloadWithIdentifier:(id)arg1 url:(id)arg2 md5:(id)arg3 header:(id)arg4 templateType:(unsigned int)arg5 fullVersion2FilePathMap:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)dealloc;
- (id)init;

@end

