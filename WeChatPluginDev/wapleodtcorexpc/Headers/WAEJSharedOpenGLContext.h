//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, EAGLSharegroup, NSMutableData, WAEJGLProgram2D, WAEJGLProgram2DRadialGradient;

@interface WAEJSharedOpenGLContext : NSObject
{
    WAEJGLProgram2D *programFlat;
    WAEJGLProgram2D *programTexture;
    WAEJGLProgram2D *programAlphaTexture;
    WAEJGLProgram2D *programPattern;
    WAEJGLProgram2DRadialGradient *programRadialGradient;
    EAGLContext *glContext2D;
    EAGLSharegroup *glSharegroup;
    sk_sp_f030eba7 skContext;
    NSMutableData *vertexBuffer;
    _Bool isEnterBackground;
    _Bool _forceReleaseInBg;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceReleaseInBg; // @synthesize forceReleaseInBg=_forceReleaseInBg;
@property(nonatomic, getter=isEnterBackground) _Bool isEnterBackground; // @synthesize isEnterBackground;
@property(readonly, nonatomic) EAGLSharegroup *glSharegroup; // @synthesize glSharegroup;
@property(readonly, nonatomic) sk_sp_f030eba7 skContext; // @synthesize skContext;
@property(readonly, nonatomic) EAGLContext *glContext2D; // @synthesize glContext2D;
@property(readonly, nonatomic) WAEJGLProgram2DRadialGradient *programRadialGradient; // @synthesize programRadialGradient;
@property(readonly, nonatomic) WAEJGLProgram2D *programPattern; // @synthesize programPattern;
@property(readonly, nonatomic) WAEJGLProgram2D *programAlphaTexture; // @synthesize programAlphaTexture;
@property(readonly, nonatomic) WAEJGLProgram2D *programTexture; // @synthesize programTexture;
@property(readonly, nonatomic) WAEJGLProgram2D *programFlat; // @synthesize programFlat;
@property(readonly, nonatomic) NSMutableData *vertexBuffer;
- (void)dealloc;
- (id)init;

@end

