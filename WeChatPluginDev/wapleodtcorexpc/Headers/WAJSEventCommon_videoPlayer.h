//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAJSEventCommon_videoPlayer : NSObject
{
}

+ (unsigned long long)queryPreloadStatusWithVideoUrl:(id)arg1;
+ (void)reportAppBrandVideoPreLoadWithFilePath:(id)arg1 costTimeMs:(unsigned long long)arg2 preLoadStatus:(unsigned long long)arg3;
+ (void)setVideoPath:(id)arg1 videoView:(id)arg2 appId:(id)arg3;

@end

