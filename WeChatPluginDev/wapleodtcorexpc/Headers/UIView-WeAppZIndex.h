//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (WeAppZIndex)
- (void)wa_tryAdjustIndexOfCurrentView:(long long)arg1;
@property(nonatomic) long long wa_nativeViewZIndex; // @dynamic wa_nativeViewZIndex;
@property(nonatomic) unsigned int wa_nativeContainerId;
@property(nonatomic) _Bool wa_notAdd2ScrollViewWhenChanged;
@end

