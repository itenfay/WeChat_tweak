//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UISwitch.h>

@class UIView;

@interface MMUICellSwitch : UISwitch
{
    UIView *_superContainerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *superContainerView; // @synthesize superContainerView=_superContainerView;
- (void)layoutSubviews;
- (struct CGPoint)accessibilityActivationPoint;
- (struct CGRect)accessibilityFrame;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)getSuperContainerView;

@end

