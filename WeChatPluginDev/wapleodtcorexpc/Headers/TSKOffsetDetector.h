//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TSKOffsetDetector : NSObject
{
}

+ (_Bool)detectOffsetBetweenPath:(id)arg1 andPath:(id)arg2 sampleRate:(int)arg3 channels:(int)arg4 params:(struct TSKDetectParams_ *)arg5 offsetMs:(int *)arg6;
+ (struct TSKDetectParams_)defaultDetectParams;

@end

