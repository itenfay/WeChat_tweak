//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface YtFaceFrameInfo : NSObject
{
    void * _faceShape;
    struct Mat _faceFrame;
}

@property(nonatomic) void * faceShape; // @synthesize faceShape=_faceShape;
@property(nonatomic) struct Mat faceFrame; // @synthesize faceFrame=_faceFrame;
- (id)initWithMat:(struct Mat *)arg1 withShape:(void *)arg2;

@end

