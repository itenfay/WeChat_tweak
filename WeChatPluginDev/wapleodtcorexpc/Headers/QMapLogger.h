//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSFileHandle, NSString;

@interface QMapLogger : NSObject
{
    _Bool _logOn;
    NSString *_fileDirPath;
    NSDateFormatter *_dateFormatterForMMddHHmmss;
    NSString *_fileTextPath;
    NSFileHandle *_selfHandle;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool logOn; // @synthesize logOn=_logOn;
@property(retain, nonatomic) NSFileHandle *selfHandle; // @synthesize selfHandle=_selfHandle;
@property(copy, nonatomic) NSString *fileTextPath; // @synthesize fileTextPath=_fileTextPath;
@property(retain, nonatomic) NSDateFormatter *dateFormatterForMMddHHmmss; // @synthesize dateFormatterForMMddHHmmss=_dateFormatterForMMddHHmmss;
@property(readonly, nonatomic) NSString *fileDirPath; // @synthesize fileDirPath=_fileDirPath;
- (void)deleteExpiredFiles;
- (void)writeLogText:(id)arg1;
- (id)init;
- (id)logWithText:(id)arg1 level:(id)arg2 event:(id)arg3 levelNumber:(int)arg4;
- (id)dateByMMddHHmmss;

@end

