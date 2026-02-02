//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MAVEffectRenderer, MAVMTLView, NSArray, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MVVideoEffectRendererView : UIView
{
    _Bool _shouldClearDisplayContent;
    _Bool _isApplicationActive;
    MAVEffectRenderer *_effectRender;
    MAVMTLView *_glkView;
    NSMutableArray *_pendingTaskList;
    NSArray *_transitionList;
    NSObject<OS_dispatch_queue> *_renderDispatchQueue;
    struct CGRect _displayFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isApplicationActive; // @synthesize isApplicationActive=_isApplicationActive;
@property(nonatomic) struct CGRect displayFrame; // @synthesize displayFrame=_displayFrame;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderDispatchQueue; // @synthesize renderDispatchQueue=_renderDispatchQueue;
@property(nonatomic) _Bool shouldClearDisplayContent; // @synthesize shouldClearDisplayContent=_shouldClearDisplayContent;
@property(retain, nonatomic) NSArray *transitionList; // @synthesize transitionList=_transitionList;
@property(retain, nonatomic) NSMutableArray *pendingTaskList; // @synthesize pendingTaskList=_pendingTaskList;
@property(retain, nonatomic) MAVMTLView *glkView; // @synthesize glkView=_glkView;
@property(retain, nonatomic) MAVEffectRenderer *effectRender; // @synthesize effectRender=_effectRender;
- (void)clearDisplay;
- (_Bool)isValidStatus;
- (void)drawInMTKView:(id)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)setTransitions:(id)arg1;
- (void)addBlurEffectForRenderWithRadius:(float)arg1;
- (struct CGSize)rendererSize;
- (void)updateSubviewFrame;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)renderToScreenWithTask:(id)arg1;
- (void)displayGlkView;
- (void)_shouldRender:(id)arg1;
- (void)shouldRender:(id)arg1;
- (void)setupSubviews;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

