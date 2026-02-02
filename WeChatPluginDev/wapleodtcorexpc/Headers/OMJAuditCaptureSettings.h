//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJAuditCaptureSettings : NSObject
{
    unsigned long long _captureDimensionLevel;
    double _captureFrameInterval;
    long long _outputType;
    NSString *_outputDirPath;
    NSString *_outputFilenameBase;
}

+ (id)wcmj_defaultSettings;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *outputFilenameBase; // @synthesize outputFilenameBase=_outputFilenameBase;
@property(readonly, copy, nonatomic) NSString *outputDirPath; // @synthesize outputDirPath=_outputDirPath;
@property(readonly, nonatomic) long long outputType; // @synthesize outputType=_outputType;
@property(readonly, nonatomic) double captureFrameInterval; // @synthesize captureFrameInterval=_captureFrameInterval;
@property(readonly, nonatomic) unsigned long long captureDimensionLevel; // @synthesize captureDimensionLevel=_captureDimensionLevel;
- (id)initWithCaptureDimensionLevel:(unsigned long long)arg1 captureFrameInterval:(double)arg2 outputType:(long long)arg3 outputDirPath:(id)arg4 outputFilenameBase:(id)arg5;

@end

