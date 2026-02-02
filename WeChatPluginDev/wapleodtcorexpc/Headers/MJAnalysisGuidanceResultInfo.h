//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAssetAnalysisReportInfo, MJVolumeAnalysisResult;

@interface MJAnalysisGuidanceResultInfo : NSObject
{
    MJAssetAnalysisReportInfo *_reportInfo;
    MJVolumeAnalysisResult *_volumeResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJVolumeAnalysisResult *volumeResult; // @synthesize volumeResult=_volumeResult;
@property(readonly, nonatomic) MJAssetAnalysisReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
- (id)description;
- (id)initWithReportInfo:(id)arg1 volumeResult:(id)arg2;

@end

