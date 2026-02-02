//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;

@interface MMLiveAnchorScreenRecordPIPHandleLogic
{
    CDUnknownBlockType _getCustomViewBlock;
    CDUnknownBlockType _getPIPRenderSizeBlock;
    UIView *_attachedGameLiveAccessoryView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *attachedGameLiveAccessoryView; // @synthesize attachedGameLiveAccessoryView=_attachedGameLiveAccessoryView;
@property(copy, nonatomic) CDUnknownBlockType getPIPRenderSizeBlock; // @synthesize getPIPRenderSizeBlock=_getPIPRenderSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType getCustomViewBlock; // @synthesize getCustomViewBlock=_getCustomViewBlock;
- (id)finderLiveTask;
@property(readonly, nonatomic) _Bool openTestMode;
- (_Bool)enableStartPictureInPicture;
- (void)deAttachGameLiveAccessoryView;
- (void)attachGameLiveAccessoryViewToView:(id)arg1;
- (id)getGameLiveAccessoryView;
- (void)deAttachContentViewFromCustomView:(id)arg1;
- (void)attachContentViewToCustomView:(id)arg1;
- (struct CGRect)getAbsoluteRenderViewFrame;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (struct CGSize)getRenderSize;
- (struct CGRect)getRenderViewFrame;
- (void)onCustomViewDeAttach:(id)arg1;
- (void)onCustomViewAttach:(id)arg1;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

