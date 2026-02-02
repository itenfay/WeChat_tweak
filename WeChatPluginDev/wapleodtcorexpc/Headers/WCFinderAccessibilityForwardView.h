//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCFinderAccessibilityForwardView : UIView
{
    id _target;
    SEL _labelGenerator;
}

- (void).cxx_destruct;
@property(nonatomic) SEL labelGenerator; // @synthesize labelGenerator=_labelGenerator;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;

@end

