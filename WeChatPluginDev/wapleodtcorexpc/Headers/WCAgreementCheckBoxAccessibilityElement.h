//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAccessibilityElement.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCAgreementCheckBoxAccessibilityElement : UIAccessibilityElement
{
    CDUnknownBlockType _accessibilityActivateHandler;
    CDUnknownBlockType _accessibilityActivationPointHandler;
}

@property(copy, nonatomic) CDUnknownBlockType accessibilityActivationPointHandler; // @synthesize accessibilityActivationPointHandler=_accessibilityActivationPointHandler;
@property(copy, nonatomic) CDUnknownBlockType accessibilityActivateHandler; // @synthesize accessibilityActivateHandler=_accessibilityActivateHandler;
- (struct CGPoint)accessibilityActivationPoint;
- (_Bool)accessibilityActivate;

@end
