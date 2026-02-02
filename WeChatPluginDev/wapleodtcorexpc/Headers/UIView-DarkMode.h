//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (DarkMode)
- (long long)findOverrideStyleFromResponders;
- (void)fireDarkModeObserverIfExist:(id)arg1;
- (void)removeDarkModeObserver;
- (void)removeDarkModeObserverForKey:(id)arg1;
- (void)addDarkModeObserver:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)addDarkModeObserver:(CDUnknownBlockType)arg1 forKey:(id)arg2 fireImmediately:(_Bool)arg3;
- (void)addDarkModeObserver:(CDUnknownBlockType)arg1 fireImmediately:(_Bool)arg2;
- (void)addDarkModeObserver:(CDUnknownBlockType)arg1;
- (void)performAtCurrentTraitCollection:(CDUnknownBlockType)arg1;
- (void)setLayerBorderWidth:(double)arg1;
- (void)setLayerBackgroundColor:(id)arg1;
- (void)setLayerShadowColor:(id)arg1;
- (void)setLayerBorderColor:(id)arg1;
@end

