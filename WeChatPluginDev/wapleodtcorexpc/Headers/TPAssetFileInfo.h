//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPAssetFileInfo : NSObject
{
    _Bool _usePollingMode;
    int _fileId;
    int _taskId;
    unsigned long long _size;
    NSString *_type;
    NSString *_name;
    NSString *_cacheDir;
    NSString *_customPath;
    NSString *_cachePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool usePollingMode; // @synthesize usePollingMode=_usePollingMode;
@property(retain, nonatomic) NSString *customPath; // @synthesize customPath=_customPath;
@property(retain, nonatomic) NSString *cacheDir; // @synthesize cacheDir=_cacheDir;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) int fileId; // @synthesize fileId=_fileId;
- (id)description;
- (id)getReadPath;
- (id)getLibraryCachePath;
- (id)generateCacheFile;
- (void)dealloc;
- (id)initWithTaskId:(int)arg1 fileName:(id)arg2;

@end

