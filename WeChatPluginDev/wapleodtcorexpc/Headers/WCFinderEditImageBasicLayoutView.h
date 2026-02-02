//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderEditImageBasicLayoutView
{
    _Bool _hiddenCropBtn;
}

@property(nonatomic) _Bool hiddenCropBtn; // @synthesize hiddenCropBtn=_hiddenCropBtn;
- (_Bool)shouldShowNewBGMPanel;
- (void)reportClickDoneAction;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (void)onfinderEditFrameBlurViewTap;
- (id)roundCornersOnView:(id)arg1 onTopLeft:(_Bool)arg2 topRight:(_Bool)arg3 bottomLeft:(_Bool)arg4 bottomRight:(_Bool)arg5 radius:(float)arg6;
- (void)startTextToolWithDisplayStr:(id)arg1 lineColor:(id)arg2 textStyle:(unsigned long long)arg3;
- (void)addPatMusicInfoToBGMLogic;
- (void)reloadBottomEditImageBar;
- (void)reloadMosaicToolAttrBar;
- (void)initMosaicToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)initPenToolAttrBar;
- (_Bool)canShowBGMBtn;
- (_Bool)shouldAutoTriggerMusic;
- (id)customBottomButtonOrder;

@end

