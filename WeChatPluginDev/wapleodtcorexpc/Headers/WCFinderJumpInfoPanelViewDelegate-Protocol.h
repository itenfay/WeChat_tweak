//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo, NSString, UIView, WCFinderInteractivePanelConfigParamsModel, WCFinderJumpInfoPanelView;
@protocol WCFinderJumpInfoViewProtocol;

@protocol WCFinderJumpInfoPanelViewDelegate <NSObject>

@optional
- (void)onJumpInfoPanelViewClickCollectionBubble:(WCFinderJumpInfoPanelView *)arg1;
- (void)onClickIsTemplateVideoAndEnterEdit;
- (void)onClickIsLIvingAndEnterAction;
- (void)onPresentLiveConcertTicketRequestedWithNoticeInfo:(FinderLiveNoticeInfo *)arg1;
- (void)onFinderJumpInfoViewCollectionNextDidClick:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;
- (void)onFinderJumpInfoViewCollectionNextExposure:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;
- (NSString *)videoTid;
- (_Bool)videoPauseState;
- (WCFinderInteractivePanelConfigParamsModel *)interactivePanelConfigParamsModel;
- (double)jumpInfoPanelViewRelateMediaWidth:(WCFinderJumpInfoPanelView *)arg1;
- (void)onFinderJumpInfoView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1 InPanelView:(WCFinderJumpInfoPanelView *)arg2 changeToShow:(_Bool)arg3 animated:(_Bool)arg4;
- (void)onFinderJumpInfoPanelViewHeightChanged:(WCFinderJumpInfoPanelView *)arg1;
- (void)hiddenBigFollowBtnInJumpInfoPanelView:(WCFinderJumpInfoPanelView *)arg1;
- (void)onShowBigFollowBtnInJumpInfoPanelView:(WCFinderJumpInfoPanelView *)arg1;
- (void)onFinderJumpInfoView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1 InPanelView:(WCFinderJumpInfoPanelView *)arg2 needChangeToPhase:(unsigned long long)arg3;
- (void)onFinderJumpInfoView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1 InPanelView:(WCFinderJumpInfoPanelView *)arg2 needChangeToJumpInfoStyleWithIndex:(unsigned long long)arg3;
- (void)onFinderJumpInfoViewDidClick:(UIView<WCFinderJumpInfoViewProtocol> *)arg1 inArea:(unsigned long long)arg2;
- (void)onFinderJumpInfoViewDidClick:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;
@end

