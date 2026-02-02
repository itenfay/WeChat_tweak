//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CALayer, UIColor;

@interface OMJHandleBoxShadowView : UIView
{
    UIColor *_borderColor;
    double _borderWidth;
    double _borderCornerRadius;
    double _modelScale;
    double _modelRotation;
    double _presentationScale;
    double _presentationRotation;
    CALayer *_borderLayer;
    struct CGPoint _modelPosition;
    struct CGPoint _presentationPosition;
    struct CGSize _presentationSize;
    struct CGSize _size;
    struct UIEdgeInsets _presentationEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct UIEdgeInsets presentationEdgeInsets; // @synthesize presentationEdgeInsets=_presentationEdgeInsets;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(nonatomic) struct CGPoint presentationPosition; // @synthesize presentationPosition=_presentationPosition;
@property(nonatomic) double presentationRotation; // @synthesize presentationRotation=_presentationRotation;
@property(nonatomic) double presentationScale; // @synthesize presentationScale=_presentationScale;
@property(nonatomic) struct CGPoint modelPosition; // @synthesize modelPosition=_modelPosition;
@property(nonatomic) double modelRotation; // @synthesize modelRotation=_modelRotation;
@property(nonatomic) double modelScale; // @synthesize modelScale=_modelScale;
@property(nonatomic) double borderCornerRadius; // @synthesize borderCornerRadius=_borderCornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void)updateTransform;
- (void)updatePresentationWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 scale:(double)arg3 rotation:(double)arg4 edgeInsets:(struct UIEdgeInsets)arg5;
- (void)layoutSubviews;
- (void)setupBorderLayer;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

