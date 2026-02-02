//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMLiveRewardGiftNotificationContainerViewDelegate;

@interface MMLiveRewardGiftNotificationContainerView
{
    _Bool _expandForSubNotification;
    id <MMLiveRewardGiftNotificationContainerViewDelegate> _containerDelegate;
    unsigned long long _layoutMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool expandForSubNotification; // @synthesize expandForSubNotification=_expandForSubNotification;
@property(nonatomic) unsigned long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(nonatomic) __weak id <MMLiveRewardGiftNotificationContainerViewDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;

@end

