//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UISlider.h>

@class UIColor;

@interface MMMusicSlider : UISlider
{
    UIColor *_frontgroundColor;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *frontgroundColor; // @synthesize frontgroundColor=_frontgroundColor;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)getDotImage:(id)arg1 withSize:(struct CGSize)arg2;
- (id)getTrackImage:(id)arg1;
- (void)resetView;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2 frontgroundColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

