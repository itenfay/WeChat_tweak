//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface YTFaceFastDetector : NSObject
{
}

+ (unsigned long long)getFaceCountFromImage:(id)arg1;
- (unsigned long long)getImageFaceCount:(id)arg1;
- (struct Mat)getCvRgbFromCGImageRef:(struct CGImage *)arg1;
- (int)globalReleaseDetector;
- (int)globalInitDetector;
- (id)init;
- (void)dealloc;

@end

