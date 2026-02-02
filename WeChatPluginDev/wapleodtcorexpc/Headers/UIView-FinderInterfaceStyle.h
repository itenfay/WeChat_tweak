//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (FinderInterfaceStyle)
+ (id)colorWithMMUserInterfaceStyle:(long long)arg1 lightColor:(id)arg2 darkColor:(id)arg3;
+ (id)colorWithMMUserInterfaceStyle:(long long)arg1 color:(id)arg2;
- (id)dynamicColorWithViewInterfaceStyleInLight:(id)arg1 dark:(id)arg2;
- (id)dynamicColorWithViewInterfaceStyle:(id)arg1;
- (void)configFinderUserInterfaceUpdateBlock:(CDUnknownBlockType)arg1;
- (void)setFinderMMUserInterfaceStyle:(long long)arg1;
- (long long)finderMMUserInterfaceStyle;
@end

