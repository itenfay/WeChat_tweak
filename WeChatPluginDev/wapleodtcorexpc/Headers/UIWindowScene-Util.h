//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIWindowScene.h>

@class UIWindow;

@interface UIWindowScene (Util)
- (_Bool)isMainScene;
@property(readonly, nonatomic) UIWindow *rootWindow;
@end

