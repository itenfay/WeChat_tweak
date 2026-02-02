//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAccessibilityElement.h>

@class UIView;

@interface TempAccessibilityElement : UIAccessibilityElement
{
    UIView *_view;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (_Bool)accessibilityActivate;
- (id)initWithView:(id)arg1;

@end

