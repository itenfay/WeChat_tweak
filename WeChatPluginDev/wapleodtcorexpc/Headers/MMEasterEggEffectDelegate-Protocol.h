//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol MMEasterEggEffectDelegate <NSObject>
- (void)onEffectEnd;
- (void)onTapInteractiveUI;
- (double)getEffectParentViewTopInset;
- (UIView *)getEffectParentView;
@end

