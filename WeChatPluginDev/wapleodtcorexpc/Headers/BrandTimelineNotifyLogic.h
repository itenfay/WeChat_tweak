//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;
@protocol BrandTimelineNotifyLogicDelegate;

@interface BrandTimelineNotifyLogic
{
    unsigned int _notifyCount;
    id <BrandTimelineNotifyLogicDelegate> _delegate;
    CMessageWrap *_latestMsgWrap;
    long long _creationCenterNotifyCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long creationCenterNotifyCount; // @synthesize creationCenterNotifyCount=_creationCenterNotifyCount;
@property(readonly, nonatomic) CMessageWrap *latestMsgWrap; // @synthesize latestMsgWrap=_latestMsgWrap;
@property(readonly, nonatomic) unsigned int notifyCount; // @synthesize notifyCount=_notifyCount;
@property(nonatomic) __weak id <BrandTimelineNotifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onNotificationUnreadCountChange;
- (void)notifyToSimulatedNativeCreationCenter:(long long)arg1 buffer:(id)arg2;
- (void)innerUpdate;
- (id)init;

@end

