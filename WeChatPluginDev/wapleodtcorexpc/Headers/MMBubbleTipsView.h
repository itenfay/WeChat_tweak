//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MMUILabel;

@interface MMBubbleTipsView : UIControl
{
    MMUILabel *_titleLabel;
    double _bubbleCornerRadius;
    struct CGSize _maxSize;
    struct CGSize _arrowSize;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _bubbleEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets bubbleEdgeInsets; // @synthesize bubbleEdgeInsets=_bubbleEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) struct CGSize arrowSize; // @synthesize arrowSize=_arrowSize;
@property(nonatomic) double bubbleCornerRadius; // @synthesize bubbleCornerRadius=_bubbleCornerRadius;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (void)rebuildMask:(double)arg1;
- (void)resizeBubble:(struct CGPoint)arg1;
- (void)hide:(_Bool)arg1;
- (void)showInView:(id)arg1 targetPosition:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (void)setContent:(id)arg1;
- (void)setText:(id)arg1;
- (id)defaultTextAttrs;
- (id)initWithFrame:(struct CGRect)arg1;

@end

