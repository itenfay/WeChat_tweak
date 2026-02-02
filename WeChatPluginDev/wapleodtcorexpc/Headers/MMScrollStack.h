//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class UIStackView;

@interface MMScrollStack : UIScrollView
{
    UIStackView *_stackView;
    long long _axis;
}

- (void).cxx_destruct;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long alignment;
- (_Bool)isVertical;
- (void)removeAllCells;
- (id)appendSeparatorWithStartPadding:(double)arg1 endPadding:(double)arg2;
- (void)appendSeparatorWithEndPadding:(double)arg1;
- (void)appendSeparatorWithStartPadding:(double)arg1;
- (void)appendSeparator;
- (void)setActiveLayoutMargins:(struct UIEdgeInsets)arg1;
- (id)appendView:(id)arg1 withNextSpace:(double)arg2;
- (id)initWithAxis:(long long)arg1 contentMode:(unsigned long long)arg2;
- (id)initWithAxis:(long long)arg1;
- (id)init;

@end

