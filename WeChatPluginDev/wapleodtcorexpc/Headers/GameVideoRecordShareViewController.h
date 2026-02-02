//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MiniGameVideoFile, NSMutableDictionary, NSString, RichTextView, UIButton, UIView, WCPlayerConfigControlView, WCPlayerView;

@interface GameVideoRecordShareViewController
{
    unsigned int _width;
    unsigned int _height;
    MiniGameVideoFile *_videoFile;
    CDUnknownBlockType _callback;
    long long _parentOrientation;
    NSMutableDictionary *_resultMap;
    NSMutableDictionary *_itemModels;
    RichTextView *bottomHintLable;
    UIView *buttonBar;
    UIButton *stashButton;
    UIButton *shareButton;
    WCPlayerView *playerView;
    WCPlayerConfigControlView *controlView;
    _Bool _toolViewHidden;
}

- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)overrideMMUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (void)onClose;
- (void)didMoveToParentViewController:(id)arg1;
- (void)onClickShare;
- (void)checkShowEducationWithItem:(id)arg1 withCallbck:(CDUnknownBlockType)arg2;
- (void)onShareResultWithScene:(id)arg1 isSuccess:(_Bool)arg2 isCancel:(_Bool)arg3 errMsg:(id)arg4;
- (_Bool)hasShare;
- (_Bool)hasStash;
- (void)onClickStash;
- (void)reLayoutButtonsWithHasStash:(_Bool)arg1 hasShare:(_Bool)arg2;
- (id)provideVideoArgs;
- (_Bool)isLandscape;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)onHiddenBufferingView;
- (void)onShowBufferingView;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onToolViewAutoClose;
- (void)onVideoPlay;
- (void)onTapAttachButton:(id)arg1;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapSightIconView;
- (void)onSightIconProgressEnd;
- (void)reportWithAreaId:(int)arg1 withPositionId:(long long)arg2 withActionId:(int)arg3 withOpType:(int)arg4 withExtInfo:(id)arg5 withFuncType:(unsigned int)arg6;
- (void)layout;
- (void)layoutBottomHintLableWithText:(id)arg1;
- (id)buildShareToSnsItem;
- (id)buildShareToFriendItem;
- (void)goToWebViewWithUrl:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)buildShareToGameCenterItem;
- (id)buildStashItem;
- (id)getMappedKV;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)prepareModels:(id)arg1;
- (id)initWithVideo:(id)arg1 withWidth:(unsigned int)arg2 withHeight:(unsigned int)arg3 withParentOrientation:(long long)arg4 withAppName:(id)arg5 withAppId:(id)arg6 withExtConfigJson:(id)arg7 withShareOptions:(id)arg8 withShareTitle:(id)arg9 withShareDesc:(id)arg10 withAppVersion:(unsigned int)arg11 withAppState:(unsigned int)arg12 withIsDevEdited:(_Bool)arg13 callbck:(CDUnknownBlockType)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

