//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface UploadLoginFileManager : NSObject
{
    _Bool _isUploaded;
    NSMutableArray *_logDirs;
    NSString *_rootDir;
    CDUnknownBlockType _callbakcblock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType callbakcblock; // @synthesize callbakcblock=_callbakcblock;
@property _Bool isUploaded; // @synthesize isUploaded=_isUploaded;
@property(retain, nonatomic) NSString *rootDir; // @synthesize rootDir=_rootDir;
@property(retain, nonatomic) NSMutableArray *logDirs; // @synthesize logDirs=_logDirs;
- (void)deleteDirWithParentPath:(id)arg1;
- (void)deleteFileAtPath:(id)arg1;
- (void)httprequestWithUrl:(id)arg1 withPostData:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (id)getDeviceInfo;
- (id)readFileToData:(id)arg1;
- (id)compressDir:(id)arg1;
- (void)uploadzipdata:(id)arg1 deletezipdir:(id)arg2 deleteLogdir:(id)arg3;
- (void)checkzipdataWithlogdir:(id)arg1;
- (void)uploadAllLogWithLogDirName:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addLogDirName:(id)arg1;
- (id)init;

@end

