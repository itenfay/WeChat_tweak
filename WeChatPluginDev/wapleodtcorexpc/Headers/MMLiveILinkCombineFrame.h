//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveILinkCombineFrame : NSObject
{
    struct opaqueCMSampleBuffer *_sampleBuffer;
    double _xRotate;
    double _yRotate;
    double _zRotate;
    double _xTranslate;
    double _yTranslate;
    double _alpha;
    double _scale;
    struct CGRect _crop;
    struct CGRect _position;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double yTranslate; // @synthesize yTranslate=_yTranslate;
@property(nonatomic) double xTranslate; // @synthesize xTranslate=_xTranslate;
@property(nonatomic) double zRotate; // @synthesize zRotate=_zRotate;
@property(nonatomic) double yRotate; // @synthesize yRotate=_yRotate;
@property(nonatomic) double xRotate; // @synthesize xRotate=_xRotate;
@property(nonatomic) struct CGRect position; // @synthesize position=_position;
@property(nonatomic) struct CGRect crop; // @synthesize crop=_crop;
@property(nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
- (void)dealloc;
- (id)init;

@end

