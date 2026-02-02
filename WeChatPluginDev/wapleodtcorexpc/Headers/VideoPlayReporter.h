//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VideoPlayReporter : NSObject
{
}

+ (void)reportOnDownloadMsg:(id)arg1 taskInfo:(id)arg2;
+ (id)getActionPrefix:(id)arg1;
+ (void)reportOnClickToPlayWithMsg:(id)arg1 playAction:(int)arg2 totalPlayTime:(unsigned int)arg3 loadingTime:(unsigned long long)arg4;
+ (void)reportOnClickToPlayWithMsg:(id)arg1 playAction:(int)arg2;

@end

