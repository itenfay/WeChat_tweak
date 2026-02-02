//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMScrollStack;

@interface MMScrollStackCell : UIView
{
    _Bool _isHighlightable;
    CDUnknownBlockType _onTap;
    MMScrollStack *_stack;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak MMScrollStack *stack; // @synthesize stack=_stack;
@property(copy, nonatomic) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
@property(nonatomic) _Bool isHighlightable; // @synthesize isHighlightable=_isHighlightable;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) struct UIEdgeInsets padding;
- (void)initView;
- (id)initWithView:(id)arg1 stack:(id)arg2;

@end

