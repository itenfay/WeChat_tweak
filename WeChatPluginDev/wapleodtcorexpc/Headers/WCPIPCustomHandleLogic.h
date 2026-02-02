//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPIPCustomHandleLogic : NSObject
{
    _Bool _isSourcePixelBufferChanged;
    _Bool _isAttachWidgetChanged;
    _Bool _isHandling;
    _Bool _isRestoreUserInterface;
    _Bool _isManualFitSize;
    _Bool _isPlayerAbnormalPaused;
    _Bool _needClearSrcCompletely;
}

@property(nonatomic) _Bool needClearSrcCompletely; // @synthesize needClearSrcCompletely=_needClearSrcCompletely;
@property(nonatomic) _Bool isPlayerAbnormalPaused; // @synthesize isPlayerAbnormalPaused=_isPlayerAbnormalPaused;
@property(nonatomic) _Bool isManualFitSize; // @synthesize isManualFitSize=_isManualFitSize;
@property(nonatomic) _Bool isRestoreUserInterface; // @synthesize isRestoreUserInterface=_isRestoreUserInterface;
@property(nonatomic) _Bool isHandling; // @synthesize isHandling=_isHandling;
@property _Bool isAttachWidgetChanged; // @synthesize isAttachWidgetChanged=_isAttachWidgetChanged;
@property _Bool isSourcePixelBufferChanged; // @synthesize isSourcePixelBufferChanged=_isSourcePixelBufferChanged;
- (_Bool)checkCurrHasPIPAuthority;
- (void)onPIPAuthorityAchieved;
- (void)onPIPAuthorityOccupied;
@property(readonly, nonatomic) _Bool needSaveSrcIfPossible;
@property(readonly, nonatomic) _Bool needCollectSrcPixelBuffer;
- (void)stopLoading;
- (void)startLoading;
- (void)onCurrentActivePIPTaskBeRemoved;
- (void)onStopCustomPixelTransfer;
- (void)onStartCustomPixelTransfer;
- (void)onEndRenderBuffer:(struct CGSize)arg1;
- (void)onBeginRenderBuffer;
- (void)onEndAttachWidgets:(unsigned long long)arg1;
- (void)onBeginAttachWidgets;
- (void)onEndNewRenderBuffer:(struct CGSize)arg1;
- (void)onBeginNewRenderBuffer;
- (void)onEndRenderPixel;
- (void)onBeginRenderPixel;
- (void)onEndRefreshSourcePixel;
- (void)onBeginRefreshSourcePixel;
- (void)onPlayerTimeControlStatusChanged:(long long)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)destroy;
- (void)checkRenderObjectsValid:(long long)arg1;
- (_Bool)isRenderIdUnValid:(id)arg1;
- (_Bool)isVideoFrameUnValid:(id)arg1;
- (_Bool)isRenderObjUnValid:(id)arg1;
- (id)currentRenderIdList;
- (id)currentRenderObjDict;
- (void)tagAttachWidgetRenderCompleted;
- (void)tagPixelBufferRenderCompleted;
- (void)clearVideoFrames;
- (void)refresh:(id)arg1 sourceId:(id)arg2;
- (id)getCurrentBusinessId;
- (id)getVideoSrcId;
- (struct CGSize)getRenderSize;
- (_Bool)enableStartPictureInPicture;
- (void)handlePixelBufferRefresh:(id)arg1;
- (struct CGRect)getRenderViewFrame;
- (void)updateRenderViewFrame;
- (void)attachRenderView:(id)arg1;
- (void)stopHandle;
- (void)startHandle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

