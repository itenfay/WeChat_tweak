//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TXCVideoFrameCoords : NSObject
{
    float _frameVertices[8];
    float _textureCoords[8];
    _Bool _viewInLandscape;
    _Bool _outputMirror;
    unsigned int _orientation;
    unsigned long long _mirrorMode;
    unsigned long long _rotation;
    unsigned long long _fillMode;
    unsigned long long _flip;
    float *_vertices;
    unsigned long long _outputRotation;
    NSNumber *_transform;
    struct CGSize _inputSize;
    struct CGSize _outputSize;
    struct CGRect _cropRect;
}

+ (unsigned long long)mirrorOfTransform:(unsigned long long)arg1 originOrientation:(unsigned int)arg2 outputRotation:(unsigned long long)arg3;
+ (unsigned long long)horizontalFlipOfTransform:(unsigned long long)arg1;
+ (unsigned long long)verticalFlipOfTransform:(unsigned long long)arg1;
+ (unsigned long long)rotate180OfTransform:(unsigned long long)arg1;
+ (unsigned long long)transformOfRotation:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *transform; // @synthesize transform=_transform;
@property(nonatomic) _Bool outputMirror; // @synthesize outputMirror=_outputMirror;
@property(nonatomic) unsigned long long outputRotation; // @synthesize outputRotation=_outputRotation;
@property(nonatomic) float *vertices; // @synthesize vertices=_vertices;
@property(nonatomic) unsigned long long flip; // @synthesize flip=_flip;
@property(nonatomic, getter=isViewInLandscape) _Bool viewInLandscape; // @synthesize viewInLandscape=_viewInLandscape;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) unsigned long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) unsigned long long mirrorMode; // @synthesize mirrorMode=_mirrorMode;
@property(nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) _Bool isTrimScaling;
@property(readonly, nonatomic) _Bool isIdentical;
- (void)updateCoords;
- (void)updateOutputProperties;
- (unsigned long long)outputTransform;
- (const float *)rawTextureCoords;
@property(readonly, nonatomic) float *textureCoords;
- (id)init;
- (id)debugDescription;

@end

