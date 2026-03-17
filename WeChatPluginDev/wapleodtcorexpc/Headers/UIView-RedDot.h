//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMBadgeView;

@interface UIView (RedDot)
- (void)removeRedDot;
- (void)layoutRedDotAt:(long long)arg1;
- (id)showCustomizedBadgeView:(id)arg1 atPosition:(long long)arg2;
- (id)showNumberRedDotAt:(long long)arg1 number:(unsigned long long)arg2;
- (id)showNEWAt:(long long)arg1;
- (id)showSmallRedDotAt:(long long)arg1;
- (_Bool)isShowingRedDot;
@property(retain, nonatomic) MMBadgeView *viewSpecificRedDot;
@end

