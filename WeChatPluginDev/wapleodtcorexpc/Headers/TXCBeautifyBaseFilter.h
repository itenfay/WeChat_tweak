//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXCGlFrameBuffer, TXCGlProgram, TXCVideoFrameCoords;
@protocol TXCBeautifyBaseFilterDelegate, TXIGlContext;

@interface TXCBeautifyBaseFilter : NSObject
{
    _Bool _enableSharpnessEnhancement;
    float _beautyLevel;
    float _whitenessLevel;
    float _ruddinessLevel;
    NSObject<TXCBeautifyBaseFilterDelegate> *_delegate;
    NSString *_fragmentShaderString;
    NSString *_vertexShaderString;
    TXCGlProgram *_program;
    id <TXIGlContext> _context;
    TXCGlFrameBuffer *_frameBuffer;
    TXCVideoFrameCoords *_frameCoords;
    struct CGSize _outputSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCVideoFrameCoords *frameCoords; // @synthesize frameCoords=_frameCoords;
@property(retain, nonatomic) TXCGlFrameBuffer *frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(retain, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
@property(retain, nonatomic) TXCGlProgram *program; // @synthesize program=_program;
@property(retain, nonatomic) NSString *vertexShaderString; // @synthesize vertexShaderString=_vertexShaderString;
@property(retain, nonatomic) NSString *fragmentShaderString; // @synthesize fragmentShaderString=_fragmentShaderString;
@property(nonatomic) _Bool enableSharpnessEnhancement; // @synthesize enableSharpnessEnhancement=_enableSharpnessEnhancement;
@property(nonatomic) float ruddinessLevel; // @synthesize ruddinessLevel=_ruddinessLevel;
@property(nonatomic) float whitenessLevel; // @synthesize whitenessLevel=_whitenessLevel;
@property(nonatomic) float beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) __weak NSObject<TXCBeautifyBaseFilterDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)processVideoFrame:(id)arg1;
- (_Bool)createGlObjectsIfNeeded;
- (unsigned long long)beautyStyle;
- (void)configFrameCoord:(id)arg1 inputFame:(id)arg2;
- (void)setUniformsForFilter:(id)arg1 fboSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

