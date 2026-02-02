//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WACameraOperateUtility : NSObject
{
}

+ (id)imageFromImage:(id)arg1 inRect:(struct CGRect)arg2;
+ (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
+ (id)thumbForVideoWithPath:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3;
+ (id)thumbForVideoWithPath:(id)arg1;
+ (double)getFrameBufferMinLengthWithSizeStr:(id)arg1;
+ (id)getCaptureSessionPreset:(int)arg1;
+ (struct CGSize)getCaptureResolution:(int)arg1;

@end

