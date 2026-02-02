//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMUILabel;

@interface TextStateTopicGuideBubbleView : UIView
{
    UIView *_bubbleView;
    CAShapeLayer *_bubbleLayer;
    MMUILabel *_textLabel;
    struct CGPoint _arrowPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) CAShapeLayer *bubbleLayer; // @synthesize bubbleLayer=_bubbleLayer;
@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(nonatomic) struct CGPoint arrowPoint; // @synthesize arrowPoint=_arrowPoint;
- (void)didMoveToSuperview;
- (void)refreshView;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

