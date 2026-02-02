//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicUser;

@protocol MMFinderLiveConnectMicPkPanelMasterViewDelegate <NSObject>

@optional
- (void)onMMFinderLiveConnectMicPkPanelInviteMicToAudienceUser:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveConnectMicPkPanelCancelConnectToUser:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveConnectMicPkPanelCloseConnectToUser:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveConnectMicPkPanelApplyConnectToUser:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveConnectMicPkPanelAcceptConnectFromUser:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveConnectMicPkPanelMoreAction;
- (void)onMMFinderLiveConnectMicPkPanelSearchAction;
- (void)onMMFinderLiveConnectMicPkPanelStartPk;
- (void)onMMFinderLiveConnectMicPkPanelChangePlayMode;
- (void)onMMFinderLiveConnectMicPkPanelApplyOneMore;
- (void)onMMFinderLiveConnectMicPkPanelCancelPk;
- (void)onMMFinderLiveConnectMicPkPanelAcceptPk;
- (void)onMMFinderLiveConnectMicPkPanelCloseMic;
@end

