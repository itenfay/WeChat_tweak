//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIImageView, UIImpactFeedbackGenerator, WCADCanvasEggAnimationHugeDisk;

@interface WCAdTwistHugeDiskView
{
    int _impactTimingIndex;
    WCADCanvasEggAnimationHugeDisk *_hugeDiskInfo;
    UIImageView *_flipBackView;
    double _paddingBottom;
    UIImpactFeedbackGenerator *_impactFeedback;
    NSArray *_impactTimings;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) int impactTimingIndex; // @synthesize impactTimingIndex=_impactTimingIndex;
@property(retain, nonatomic) NSArray *impactTimings; // @synthesize impactTimings=_impactTimings;
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactFeedback; // @synthesize impactFeedback=_impactFeedback;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImageView *flipBackView; // @synthesize flipBackView=_flipBackView;
@property(retain, nonatomic) WCADCanvasEggAnimationHugeDisk *hugeDiskInfo; // @synthesize hugeDiskInfo=_hugeDiskInfo;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (double)fetchEaseTimingFor:(double)arg1;
- (id)generateCornerForImage:(id)arg1 cornerRadius:(double)arg2;
- (void)triggerImpactOnceAtIndex:(int)arg1;
- (void)triggerImpactOnce;
- (id)generateimpactTimingsInDuration:(double)arg1;
- (void)startImpactInDuration:(double)arg1;
- (void)updateFlipBackViewWithImage:(id)arg1;
- (id)fetchSpecialView;
- (double)fetchImageCornerRadius;
- (void)updateSubviewsWithImage:(id)arg1 forView:(id)arg2;
- (id)fetchImageForUrl:(id)arg1;
- (id)generateTwistTransitionSubviewWithImage:(id)arg1 isSpecial:(_Bool)arg2;
- (void)generateSubviews;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 flipBackView:(id)arg2 imageSize:(struct CGSize)arg3 paddingBottom:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

