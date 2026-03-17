//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WSVideoUtil : NSObject
{
}

+ (void)ReportIDKeyForVideoThumbDownload:(id)arg1 nsUrl:(id)arg2;
+ (void)Report16270VideoCdnStatusToSvr:(id)arg1 retCode:(int)arg2 vt:(int)arg3 cdnTaskInfo:(id)arg4;
+ (void)Report16270ForVideo:(id)arg1 retCode:(int)arg2 vt:(int)arg3 cdnTaskInfo:(id)arg4;
+ (void)Report15248ForVideo:(id)arg1 retCode:(int)arg2 playTimeInSec:(unsigned int)arg3;
+ (void)ReportIDKeyForVideoPlayErrCode:(int)arg1;
+ (id)timeFormat:(int)arg1;

@end

