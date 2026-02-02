//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJMovieExportSettings;

@interface MJTemplateAsyncExportInfo : NSObject
{
    NSString *_clipBundleID;
    NSString *_asyncTaskID;
    double _exportVideoDuration;
    OMJMovieExportSettings *_exportSettings;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) OMJMovieExportSettings *exportSettings; // @synthesize exportSettings=_exportSettings;
@property(nonatomic) double exportVideoDuration; // @synthesize exportVideoDuration=_exportVideoDuration;
@property(copy, nonatomic) NSString *asyncTaskID; // @synthesize asyncTaskID=_asyncTaskID;
@property(copy, nonatomic) NSString *clipBundleID; // @synthesize clipBundleID=_clipBundleID;
- (void)clearAsyncTaskInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

