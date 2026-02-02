//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, VoipOpenglesContext;
@protocol NSObject;

@interface EAGLView_v2 : UIView
{
    _Bool m_acceptNV12;
    _Bool m_mirrored;
    UIView *m_defaultView;
    VoipOpenglesContext *m_openglesContext;
    id <NSObject> targetor;
    SEL selector;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_mirrored; // @synthesize m_mirrored;
@property(nonatomic) _Bool m_acceptNV12; // @synthesize m_acceptNV12;
@property(nonatomic) SEL selector; // @synthesize selector;
@property(retain, nonatomic) id <NSObject> targetor; // @synthesize targetor;
@property(retain, nonatomic) VoipOpenglesContext *m_openglesContext; // @synthesize m_openglesContext;
@property(retain, nonatomic) UIView *m_defaultView; // @synthesize m_defaultView;
- (void)randerDefaultView:(id)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (void)resetMirror:(_Bool)arg1;
- (void)setSharpenFilter:(int)arg1 sharpenMode:(long long)arg2 enable1080pSharpen:(int)arg3;
- (void)setDegrees:(float)arg1;
- (void)dealloc;
- (void)renderImage3:(char **)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage2:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)restartRender;
- (void)setupELGS:(_Bool)arg1 IsMirrored:(_Bool)arg2;
- (void)setupELGS;
- (id)initWithView:(id)arg1 AcceptNV12:(_Bool)arg2 IsMirrored:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)whenEnterBackground;
- (void)whenDidActive;
- (void)updateViewFrameWithContentSize:(struct CGSize)arg1;
- (id)renderView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)checkTouchPoint:(struct CGPoint)arg1 IfInView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

