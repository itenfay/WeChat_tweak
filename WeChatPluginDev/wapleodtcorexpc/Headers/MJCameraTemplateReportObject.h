//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJCameraTemplateReportObject : NSObject
{
    NSString *_filePath;
    unsigned long long _fileCount;
    double _captureFrameInterval;
}

+ (id)cameraTemplateReportObjKey;
- (void).cxx_destruct;
@property(nonatomic) double captureFrameInterval; // @synthesize captureFrameInterval=_captureFrameInterval;
@property(nonatomic) unsigned long long fileCount; // @synthesize fileCount=_fileCount;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

