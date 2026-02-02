//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MVVideoEffectRendererView, MVVideoPixelBuffer, NSArray;

@interface MMMusicVideoDisplayView : UIView
{
    _Bool _disableTransition;
    NSArray *_transitions;
    MVVideoEffectRendererView *_contentView;
    MVVideoPixelBuffer *_currentVideoPixelBuffer;
    MVVideoPixelBuffer *_previousVideoPixelBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MVVideoPixelBuffer *previousVideoPixelBuffer; // @synthesize previousVideoPixelBuffer=_previousVideoPixelBuffer;
@property(retain, nonatomic) MVVideoPixelBuffer *currentVideoPixelBuffer; // @synthesize currentVideoPixelBuffer=_currentVideoPixelBuffer;
@property(retain, nonatomic) MVVideoEffectRendererView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *transitions; // @synthesize transitions=_transitions;
@property(nonatomic) _Bool disableTransition; // @synthesize disableTransition=_disableTransition;
- (_Bool)isTransitioningWithCurrentTransition:(id)arg1;
- (void)clearDisplay;
- (void)updateSubviewFrame;
- (void)layoutSubviews;
- (void)clearCachedPixelBuffer;
- (void)addBlurEffectForRenderWithRadius:(float)arg1;
- (id)currentTransition;
- (id)generateRenderTaskWithoutTransitioning;
- (id)generateTaskWithTransition:(id)arg1;
- (id)generateRenderTask;
- (struct CGSize)rendererSize;
- (void)renderToScreen;
- (_Bool)isNextVideoBetweenPrevious:(id)arg1 andCurrent:(id)arg2;
- (void)tryFixTimeStampIn:(id)arg1;
- (void)shouldRender:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

