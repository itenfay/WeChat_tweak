//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSArray, UIImpactFeedbackGenerator;
@protocol MJShootBubbleSwitchDelegate;

@interface MJShootBubbleSwitch
{
    id <MJShootBubbleSwitchDelegate> _delegate;
    NSArray *_items;
    long long _selectedIndex;
    NSArray *_buttons;
    MMUIView *_containerView;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) MMUIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <MJShootBubbleSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (id)createSwitchButtonWithItem:(id)arg1;
- (void)buttonDidTouchUpInside:(id)arg1;
- (void)updateButtonStyle:(id)arg1 selected:(_Bool)arg2;
- (void)switchToIndex:(long long)arg1;
- (void)setupWithItems:(id)arg1;
- (void)resetViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

