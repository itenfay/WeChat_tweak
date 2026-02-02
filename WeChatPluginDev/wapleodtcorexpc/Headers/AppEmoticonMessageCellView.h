//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppEmoticonMessageViewModel, EmoticonCustomAddLogicController, MMEmoticonView, NSString, SightIconView, UIImageView;

@interface AppEmoticonMessageCellView
{
    MMEmoticonView *m_emoticonView;
    SightIconView *m_sightIconView;
    UIImageView *m_bottomInfoBgView;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
}

- (void).cxx_destruct;
- (void)onClickAsRefer;
- (id)getViewController;
- (void)onLongTouch;
- (void)startDownloadImage;
- (void)onClick;
- (void)onTouchUpInside;
- (void)onForward:(id)arg1;
- (void)onTakeCameraFollow:(id)arg1;
- (void)onShowRelatedEmoticon:(id)arg1;
- (void)onSaveEmoticon:(id)arg1;
- (id)operationMenuItems;
- (void)showSightIconWithIconType:(int)arg1;
- (void)showBottomInfoBgView;
- (void)initEmoticonView;
- (void)onAppear;
- (void)updateProgress;
- (void)layoutContentView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppEmoticonMessageViewModel *viewModel; // @dynamic viewModel;

@end

