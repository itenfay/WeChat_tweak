//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAssetAnalysisReportInfo;

@interface MJPHAssetAnalysisResult : NSObject
{
    _Bool _isEdited;
    _Bool _isScreenshot;
    MJAssetAnalysisReportInfo *_reportInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJAssetAnalysisReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(readonly, nonatomic) _Bool isScreenshot; // @synthesize isScreenshot=_isScreenshot;
@property(readonly, nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
- (id)description;
- (id)initWithIsEdited:(_Bool)arg1 isScreenshot:(_Bool)arg2 reportInfo:(id)arg3;

@end

