//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAccessibilityElement.h>

@class TipsView;

@interface TipsViewAccessibilityElement : UIAccessibilityElement
{
    TipsView *_tipsView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TipsView *tipsView; // @synthesize tipsView=_tipsView;
- (_Bool)accessibilityActivate;
- (id)initWithTipsView:(id)arg1;

@end

