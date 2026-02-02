//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CAGradientLayer.h>

@class NSArray;

@interface CAGradientLayer (MJExt)
- (void)mj_configure:(id)arg1;
- (void)mj_setUIColors:(id)arg1 solidIfNeeded:(_Bool)arg2;
- (void)mj_setUIColors:(id)arg1;
@property(copy, nonatomic) NSArray *uiColors;
- (void)applyUiColors:(_Bool)arg1;
- (void)addDarkModeObserverForKey:(id)arg1;
- (id)init;
@end

