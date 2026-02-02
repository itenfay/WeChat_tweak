//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@interface MMBottomBarButton : UIButton
{
    _Bool _extendTouchArea;
    unsigned long long _barButtonStyle;
}

@property(nonatomic) unsigned long long barButtonStyle; // @synthesize barButtonStyle=_barButtonStyle;
@property(nonatomic) _Bool extendTouchArea; // @synthesize extendTouchArea=_extendTouchArea;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

