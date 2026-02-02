//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCMultiChannelContainerView, GCMultiMessageViewModelConfig, GCTipLabel, NSMutableArray, NSString;

@interface GCMultiMessageViewModel : NSObject
{
    _Bool _hasBtmTip;
    GCMultiMessageViewModelConfig *_viewModelConfig;
    unsigned long long _currentIndex;
    GCMultiChannelContainerView *_multiChannelView;
    NSMutableArray *_msgViewModelArray;
    unsigned long long _unreadCnt;
    GCTipLabel *_unreadCntView;
    GCTipLabel *_bottomTip;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasBtmTip; // @synthesize hasBtmTip=_hasBtmTip;
@property(retain, nonatomic) GCTipLabel *bottomTip; // @synthesize bottomTip=_bottomTip;
@property(retain, nonatomic) GCTipLabel *unreadCntView; // @synthesize unreadCntView=_unreadCntView;
@property(nonatomic) unsigned long long unreadCnt; // @synthesize unreadCnt=_unreadCnt;
@property(retain, nonatomic) NSMutableArray *msgViewModelArray; // @synthesize msgViewModelArray=_msgViewModelArray;
@property(retain, nonatomic) GCMultiChannelContainerView *multiChannelView; // @synthesize multiChannelView=_multiChannelView;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) GCMultiMessageViewModelConfig *viewModelConfig; // @synthesize viewModelConfig=_viewModelConfig;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)currentMessageViewModel;
- (void)bindMessageView:(id)arg1;
- (unsigned long long)indexOfChannelId:(long long)arg1;
- (id)initWithMultiMessageViewModelConfig:(id)arg1;
- (void)onUnreadCntViewTaped;
- (void)udpateUnreadCntViewShow;
- (void)updateUnReadCntText;
- (void)updateUnreadCntImage;
- (id)createUnReadCountStr;
- (id)createUnReadCountLabel;
- (void)clearUnreadCnt;
- (void)updateMoreMessageReceived:(unsigned long long)arg1;
- (void)removeBtmTip;
- (void)selectChannelId:(long long)arg1;
- (id)viewModelOfChannelId:(long long)arg1;
- (void)showBtmTipWithText:(id)arg1 handleBlock:(CDUnknownBlockType)arg2;
- (void)onUserDataDictUpdate:(id)arg1;
- (void)loadFirstPageIfNeed;
- (void)loadCachedMsgDataIfNeed;
- (id)bindViewModelConfig;
- (void)jumpToChannelId:(long long)arg1 seq:(unsigned long long)arg2;
- (void)updateUserDataCell:(id)arg1;
- (void)updateNoticeBarView:(id)arg1;
- (void)updateCellModel:(id)arg1 messageSendStatus:(unsigned long long)arg2;
- (void)updatCellModel:(id)arg1 withResponse:(id)arg2;
- (void)setDisableChildViewEvent:(_Bool)arg1;
- (void)reloadCellModelInNextLoop:(id)arg1;
- (void)reconfigChatCellForUserName:(id)arg1 relayout:(_Bool)arg2;
- (void)onInputViewAdjustMessageView:(_Bool)arg1 topYOfInputView:(double)arg2;
- (void)handleChatRoomMsg:(id)arg1;
- (void)handleReceiveNewMsg:(id)arg1;
- (void)exitViewModel;
- (long long)currentChannelId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

