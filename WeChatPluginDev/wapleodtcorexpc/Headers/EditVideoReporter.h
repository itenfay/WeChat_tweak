//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EditVideoReporter
{
}

+ (void)editVideoReportCompositionResult:(_Bool)arg1 startTime:(struct timeval)arg2 endTime:(struct timeval)arg3 videoDuration:(unsigned long long)arg4 videoStartTime:(unsigned long long)arg5 videoEndTime:(unsigned long long)arg6;
+ (void)editVideoReportOnEntranceType:(unsigned long long)arg1 withClickBtn:(unsigned long long)arg2 withEditAttr:(id)arg3 withVideoDuration:(unsigned long long)arg4 withCropDuration:(unsigned long long)arg5;

@end

