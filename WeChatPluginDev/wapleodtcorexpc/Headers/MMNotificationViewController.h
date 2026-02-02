//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMNotificationView, MMTimer;
@protocol MMNotificationViewControllerDelegate;

@interface MMNotificationViewController
{
    MMNotificationView *_notificationView;
    id <MMNotificationViewControllerDelegate> _delegate;
    double _autoHideDuration;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double autoHideDuration; // @synthesize autoHideDuration=_autoHideDuration;
@property(nonatomic) __weak id <MMNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMNotificationView *notificationView; // @synthesize notificationView=_notificationView;
- (void)handlePanGesture:(id)arg1;
- (void)layoutUI;
- (void)hide;
- (void)show;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)hideNotification;
- (void)showNotification;
- (void)resetAutoHideTimer;
- (id)initWithNotificationView:(id)arg1;

@end

