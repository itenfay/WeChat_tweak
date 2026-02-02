//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EmoticonRecordConfigUtility : NSObject
{
}

+ (_Bool)isLowPerformanceDevice;
+ (double)getPreviewTopOffset;
+ (double)getCameraTopOffset;
+ (struct CGSize)getRecordVideoSize;
+ (struct CGSize)getPreviewVisibleSize;
+ (long long)getAnimationFrameRate;
+ (long long)getVideoFrameRate;
+ (struct CGSize)getCameraVisibleSize;
+ (struct CGSize)getCameraPresetSize;
+ (id)getCameraPreset;

@end

