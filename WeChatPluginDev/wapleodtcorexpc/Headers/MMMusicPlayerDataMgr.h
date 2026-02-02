//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMMusicPlayerDataMgr
{
}

+ (_Bool)canSelectVideoWithVideoDuration:(double)arg1 andMusicDuration:(double)arg2;
+ (unsigned int)getActualVideoDuration:(double)arg1;
+ (unsigned int)getActualMusicClipDuration:(double)arg1;
+ (double)getCaptureMaxDuration;
+ (void)setCurMusicClipDuration:(double)arg1;

@end

