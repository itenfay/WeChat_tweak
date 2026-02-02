//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton;
@protocol WAMainFrameTaskBarSearchCustomViewDelegate;

@interface WAMainFrameTaskBarSearchCustomView
{
    UIButton *_innerButton;
    id <WAMainFrameTaskBarSearchCustomViewDelegate> _taskBarViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAMainFrameTaskBarSearchCustomViewDelegate> taskBarViewDelegate; // @synthesize taskBarViewDelegate=_taskBarViewDelegate;
@property(retain, nonatomic) UIButton *innerButton; // @synthesize innerButton=_innerButton;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickSearch;
- (void)updateInnerButtonWithSize:(struct CGSize)arg1;
- (void)setupSubviews;
- (id)init;

@end

