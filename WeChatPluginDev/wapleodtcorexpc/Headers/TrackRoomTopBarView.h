//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSMutableDictionary, NSString, TrackRoomHeadListItem, UILabel, UIScrollView, UIView;
@protocol TrackRoomTopBarViewDelegate;

@interface TrackRoomTopBarView
{
    id <TrackRoomTopBarViewDelegate> _delegate;
    MMUIButton *_closeButton;
    MMUIButton *_minimizeButton;
    UILabel *_tipsLabel;
    UIView *_headListContainer;
    UIScrollView *_headList;
    NSMutableArray *_headListItems;
    TrackRoomHeadListItem *_selectedHeadListItem;
    _Bool _getMicSuccess;
    NSMutableDictionary *_tipsArray;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TrackRoomTopBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onHeadListItemClick:(id)arg1;
- (void)updateHeadItemAlpha:(id)arg1;
- (void)selecteHeadListItem:(id)arg1;
- (void)openTalkOk;
- (void)reStart;
- (void)pause;
- (void)reConnecting;
- (void)someoneLeave:(id)arg1 ShowTips:(_Bool)arg2;
- (void)someoneEnter:(id)arg1 ShowTips:(_Bool)arg2;
- (void)nobodyTalking;
- (void)someoneTalking:(id)arg1;
- (void)imTalking;
- (void)giveUpMic;
- (void)getMicTimeout;
- (void)getMicFail;
- (void)gettingMic;
- (void)removeTipsForOrderAndUpdate:(int)arg1;
- (void)setTipsAndUpdate:(id)arg1 forOrder:(int)arg2;
- (void)doUpdateStrategy;
- (void)updateTipsLabel:(id)arg1 TextColor:(id)arg2;
- (void)updateTitle;
- (void)clearEnterExitTips;
- (id)getHeadListItemByUsername:(id)arg1;
- (void)removeAllHeadListItem;
- (void)relayoutAllHeadListItem;
- (void)removeHeadListItem:(id)arg1;
- (void)addHeadListItem:(id)arg1 UpdateTitle:(_Bool)arg2;
- (void)onMinimizeButtonClick;
- (void)onCloseButtonClick:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

