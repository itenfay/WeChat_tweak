//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class JumpInfo, MMWebImageView, UILabel;

@interface GCNotificationBarView : UIControl
{
    MMWebImageView *_leftIcon;
    UILabel *_notificationLabel;
    MMWebImageView *_rightIcon;
    JumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) MMWebImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UILabel *notificationLabel; // @synthesize notificationLabel=_notificationLabel;
@property(retain, nonatomic) MMWebImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
- (void)configureWithNotification:(id)arg1;
- (void)layoutLabel:(id)arg1 withText:(id)arg2 width:(double)arg3 lineHeight:(double)arg4;
- (id)configFromNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

