//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJMovieExportSettings;

@interface MJMovieComposingAsyncExportInfo : NSObject
{
    NSString *_asyncTaskID;
    NSString *_clipBundleID;
    NSString *_sessionID;
    NSString *_outputFilePath;
    double _exportVideoDuration;
    OMJMovieExportSettings *_exportSettings;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMJMovieExportSettings *exportSettings; // @synthesize exportSettings=_exportSettings;
@property(nonatomic) double exportVideoDuration; // @synthesize exportVideoDuration=_exportVideoDuration;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) NSString *outputFilePath; // @synthesize outputFilePath=_outputFilePath;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *clipBundleID; // @synthesize clipBundleID=_clipBundleID;
@property(retain, nonatomic) NSString *asyncTaskID; // @synthesize asyncTaskID=_asyncTaskID;
- (id)description;
- (void)clearAsyncTaskInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClipBundleID:(id)arg1 asyncTaskID:(id)arg2 sessionID:(id)arg3 outputFilePath:(id)arg4 exportSettings:(id)arg5 timeRange:(CDStruct_e83c9415)arg6 exportVideoDuration:(double)arg7;

@end

