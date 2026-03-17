//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CMessageWrap, MMSessionInfo, MMUIViewController, NSArray, NSString;

@protocol BSTimelineMsgMgrExt

@optional
- (void)onServiceSessionChanged:(MMSessionInfo *)arg1;
- (void)onServiceNotificationUnreadCountChange;
- (void)onDeleteRecCanvasCard:(NSString *)arg1;
- (void)onTimelinePageActiveChange:(_Bool)arg1;
- (void)onTimelinePageDealloc:(MMUIViewController *)arg1;
- (void)onTimelinePageInit:(MMUIViewController *)arg1;
- (void)onMainSessionCellExposed:(_Bool)arg1;
- (void)onBrandTLExptStatusChange;
- (void)onDeleteBrandEcsSessionHolder;
- (void)onFinderRecommendCardFinderContactUpdatedToUnFollowStateWithUsername:(NSString *)arg1;
- (void)onFinderRecommendCardDidDeleteFinderCardDataWithObjectIdArr:(NSArray *)arg1 msgWrapBrandTimelineMsgId:(unsigned int)arg2;
- (void)onUpdateOftenReadContactByOpenLive:(CContact *)arg1;
- (void)onUpdateOftenReadContactByEnterFinderMember:(CContact *)arg1;
- (void)onUpdateOftenReadContactByExposeFlowListItemCellWithUserName:(NSString *)arg1;
- (void)onUpdateOftenReadContactByEnterProfile:(CContact *)arg1;
- (void)onUpdateOftenReadContactByEnterSession:(CContact *)arg1;
- (void)onUpateOftenReadBiz:(NSArray *)arg1;
- (void)onChangeBSTimelineDisplayMode;
- (void)onSetNotificationDelFlag:(CMessageWrap *)arg1;
- (void)onDelNotification:(CMessageWrap *)arg1;
- (void)onAddNotification:(CMessageWrap *)arg1;
- (void)onStarBrandUnreadCountChange;
- (void)onTimelineUnreadCountChange;
- (void)onNotificationUnreadCountChange;
- (void)onClearAllTimelineMsgUnreadStatus;
- (void)onDelBrandTimelineMsg:(NSString *)arg1 msgWrap:(CMessageWrap *)arg2;
- (void)onDelBrandTimelineMsgBySession:(NSString *)arg1;
- (void)onValidExposeBrandTimelineMsgArr:(NSArray *)arg1;
- (void)onExposeBrandTimelineMsgArr:(NSArray *)arg1;
- (void)onModBrandCanvasAdMsg:(CMessageWrap *)arg1;
- (void)onModBrandTimelineMsgArr:(NSArray *)arg1;
- (void)onModBrandTimelineMsg:(CMessageWrap *)arg1;
- (void)onAddBrandTimelineMsg:(CMessageWrap *)arg1;
- (void)onResortSuccess:(unsigned long long)arg1 pageActiveAfterResort:(_Bool)arg2;
- (void)onMigrateBrandMsgFinish:(unsigned long long)arg1;
@end

