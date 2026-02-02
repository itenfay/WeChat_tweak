//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveRewardGiftNotificationContainerView, NSString;

@interface MMFinderLiveGiftNotificationLayout : NSObject
{
    _Bool _isOtherAnchor;
    _Bool _isOtherRoomAudience;
    NSString *_comboId;
    NSString *_recipientUserName;
    long long _notificationOrientation;
    MMLiveRewardGiftNotificationContainerView *_notificationSuperView;
    unsigned long long _layoutMode;
    struct CGPoint _notificationOffset;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(nonatomic) _Bool isOtherRoomAudience; // @synthesize isOtherRoomAudience=_isOtherRoomAudience;
@property(nonatomic) _Bool isOtherAnchor; // @synthesize isOtherAnchor=_isOtherAnchor;
@property(nonatomic) __weak MMLiveRewardGiftNotificationContainerView *notificationSuperView; // @synthesize notificationSuperView=_notificationSuperView;
@property(nonatomic) long long notificationOrientation; // @synthesize notificationOrientation=_notificationOrientation;
@property(nonatomic) struct CGPoint notificationOffset; // @synthesize notificationOffset=_notificationOffset;
@property(retain, nonatomic) NSString *recipientUserName; // @synthesize recipientUserName=_recipientUserName;
@property(retain, nonatomic) NSString *comboId; // @synthesize comboId=_comboId;

@end

