//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdBreakFrameBaseReportModel
{
    int _videoCompositeType;
    double _videoDuration;
    double _clickAreaStartTime;
    double _videoPlayTotalTime;
}

@property(nonatomic) int videoCompositeType; // @synthesize videoCompositeType=_videoCompositeType;
@property(nonatomic) double videoPlayTotalTime; // @synthesize videoPlayTotalTime=_videoPlayTotalTime;
@property(nonatomic) double clickAreaStartTime; // @synthesize clickAreaStartTime=_clickAreaStartTime;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;

@end

