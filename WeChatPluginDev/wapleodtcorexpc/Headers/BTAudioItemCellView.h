//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTAudioItemCellViewModel, MMUILabel, NSString, UIView, WCBrandAudioPlayView;

@interface BTAudioItemCellView
{
    WCBrandAudioPlayView *m_audioPlayView;
    MMUILabel *m_timeLabel;
    UIView *m_containView;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)audioPlayClicked;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (id)getChatName:(id)arg1;
- (void)StopPlay;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)onUpdateViewModel;
- (id)getFriendRelatedInfoTextColor;
- (void)initFriendsReadLabel;
- (void)initTitleView;
- (void)initTitleAndTimeLabel;
- (void)initPlayView;
- (void)initNormalReaderItem;
- (void)initCoverView;
- (void)initContainView;
- (void)initTopReaderItem;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BTAudioItemCellViewModel *viewModel; // @dynamic viewModel;

@end

