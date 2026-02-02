//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TAVExportReportData : NSObject
{
    _Bool _exportSuccess;
    double _exportCostTime;
    double _avgFrameRenderTime;
    double _fileDuration;
    long long _fps;
    NSString *_errorMessage;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(nonatomic) double fileDuration; // @synthesize fileDuration=_fileDuration;
@property(nonatomic) double avgFrameRenderTime; // @synthesize avgFrameRenderTime=_avgFrameRenderTime;
@property(nonatomic) _Bool exportSuccess; // @synthesize exportSuccess=_exportSuccess;
@property(nonatomic) double exportCostTime; // @synthesize exportCostTime=_exportCostTime;

@end

