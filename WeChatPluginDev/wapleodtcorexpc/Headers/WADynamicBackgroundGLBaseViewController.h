//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <GLKit/GLKViewController.h>

@class EAGLContext, WADynamicBackgroundGLContext;

@interface WADynamicBackgroundGLBaseViewController : GLKViewController
{
    float _elapsedTime;
    WADynamicBackgroundGLContext *_glContext;
    EAGLContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) float elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(retain, nonatomic) WADynamicBackgroundGLContext *glContext; // @synthesize glContext=_glContext;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)update;
- (id)getGLContext;
- (void)setupGLContext;
- (void)setupContext;
- (void)viewDidLoad;

@end

