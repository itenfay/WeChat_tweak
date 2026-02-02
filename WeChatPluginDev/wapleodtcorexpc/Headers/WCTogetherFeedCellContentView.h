//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WCTogetherFeedCellContentView : UIView
{
    _Bool _showsBorder;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    CDUnknownBlockType _didTapBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didTapBlock; // @synthesize didTapBlock=_didTapBlock;
@property(nonatomic) _Bool showsBorder; // @synthesize showsBorder=_showsBorder;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlightedState;
- (void)setNormalState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

