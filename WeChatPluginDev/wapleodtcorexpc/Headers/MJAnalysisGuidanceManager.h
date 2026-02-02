//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAssetAnalysisReportInfo, MJMusicAnalyzer, MJOSTAnalyzer, MJPHAssetsAnalyzer, MJVolumeAnalysisResult, MJVolumeAnalyzer;

@interface MJAnalysisGuidanceManager : NSObject
{
    MJPHAssetsAnalyzer *_phAssetsAnalyzer;
    MJOSTAnalyzer *_ostAnalyzer;
    MJMusicAnalyzer *_musicAnalyzer;
    MJVolumeAnalyzer *_volumeAnalyzer;
    MJAssetAnalysisReportInfo *_reportInfo;
    MJVolumeAnalysisResult *_volumeResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJVolumeAnalysisResult *volumeResult; // @synthesize volumeResult=_volumeResult;
@property(retain, nonatomic) MJAssetAnalysisReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(readonly, nonatomic) MJVolumeAnalyzer *volumeAnalyzer; // @synthesize volumeAnalyzer=_volumeAnalyzer;
@property(readonly, nonatomic) MJMusicAnalyzer *musicAnalyzer; // @synthesize musicAnalyzer=_musicAnalyzer;
@property(readonly, nonatomic) MJOSTAnalyzer *ostAnalyzer; // @synthesize ostAnalyzer=_ostAnalyzer;
@property(readonly, nonatomic) MJPHAssetsAnalyzer *phAssetsAnalyzer; // @synthesize phAssetsAnalyzer=_phAssetsAnalyzer;
- (void)analyzeForGuidanceWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

