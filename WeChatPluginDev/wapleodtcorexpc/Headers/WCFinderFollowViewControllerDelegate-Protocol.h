//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderTimelineTabDelegateProtocol-Protocol.h"

@class FinderRecommendCloseConfig, NSData, NSString, UIImage, WCFinderAppendTabDatasModel, WCFinderFeedContentVM, WCFinderTLFeedInfo;

@protocol WCFinderFollowViewControllerDelegate <WCFinderTimelineTabDelegateProtocol>

@optional
- (void)currentTabViewControllerPopOthers:(int)arg1;
- (void)currentTabViewControllerPushOthers:(int)arg1;
- (void)onTLFeedClickMiaoJianMusic:(WCFinderFeedContentVM *)arg1 musicId:(NSString *)arg2 tingListenId:(NSString *)arg3;
- (_Bool)onFollowIsByFindPage;
- (void)onTLFeedMediaDidEndPlay:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(WCFinderTLFeedInfo *)arg3;
- (void)onTLCheckPopupDisplayAtTabType:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(WCFinderTLFeedInfo *)arg3 isFocusFeed:(_Bool)arg4 enablePopUpShow:(_Bool)arg5;
- (_Bool)onFollowEnableShowMachineTab;
- (FinderRecommendCloseConfig *)onFollowGetTimelineTabConfig;
- (void)onFollowResetAppendTabDatasModel;
- (WCFinderAppendTabDatasModel *)onFollowGetAppendTabDatasModel;
- (void)onFollowClickCollectActionShowAnimation:(UIImage *)arg1 mediaCellRect:(struct CGRect)arg2;
- (void)onFollowFeedChanged;
- (void)onFeedFollowClickMoreHotContent;
- (_Bool)onFollowGetHotTabNeedTopRefresh;
- (NSData *)onFollowGetHotTabLastBuff;
- (void)onFollowTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
- (_Bool)onFollowTimelineNoMoreCanShowHotSwitch;
- (void)updateFeedPostInfoBy:(NSString *)arg1 onLoadingState:(_Bool)arg2;
- (void)onFeedShowPostEntranceByContentVM:(WCFinderFeedContentVM *)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
@end

