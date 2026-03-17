//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FaceDetect_FaceRect : NSObject
{
    float _originX;
    float _originY;
    float _width;
    float _height;
}

@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) float originY; // @synthesize originY=_originY;
@property(nonatomic) float originX; // @synthesize originX=_originX;
- (id)wrapToDic;
- (id)initWithPara:(float)arg1 withY:(float)arg2 withWidth:(float)arg3 withHeight:(float)arg4;
- (id)initWithRect:(struct Rect)arg1;

@end

