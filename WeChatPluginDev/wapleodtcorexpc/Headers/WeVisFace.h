//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeVisFace : NSObject
{
    struct TrackerManager trackerManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)releaseFace;
- (void)getPoseAngle:(id)arg1;
- (void)getPartConfidence:(id)arg1;
- (void)getFaceAlignment:(id)arg1;
- (void)getFaceRect:(id)arg1;
- (int)detectImage:(const char *)arg1 imgWidth:(int)arg2 imgHeight:(int)arg3 imgFormat:(int)arg4 imgRotate:(int)arg5;
- (int)initFace:(id)arg1;
- (int)initFace;

@end

