//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, UIView;

@protocol MMEasterEggControllerDelegate <NSObject>
- (_Bool)isReadyToShowEasterEgg;
- (void)onTapInteractiveUI;
- (struct CGRect)getViewBoundsForImplicitAnimationType:(long long)arg1;
- (double)getEasterEggEffectParentViewTopInset;
- (UIView *)getEasterEggEffectParentView;
- (MMUIViewController *)getEasterEggContainerViewController;
@end

