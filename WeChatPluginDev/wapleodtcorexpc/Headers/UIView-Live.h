//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (Live)
+ (id)createPIPBusinessAttachId:(id)arg1;
+ (id)createPIPBusinessId:(id)arg1 withBusinessName:(id)arg2;
- (id)liveDirtyHandle;
- (void)setLiveDirtyHandle:(id)arg1;
- (void)removeFromPIPLayerForDeAttachIfNeeded;
- (void)restoreHiddenStatusFromContainer:(id)arg1;
- (void)saveHiddenStatusToContainer:(id)arg1;
- (unsigned long long)getExposeTimestamp;
- (void)setExposeTimestamp:(unsigned long long)arg1;
- (void)updateWidthHeightPercent;
- (void)setWidthHeightPercent:(double)arg1;
- (double)widthHeightPercent;
- (id)liveExtraInfo;
- (void)setLiveExtraInfo:(id)arg1;
- (_Bool)liveUnableDisplay;
- (void)setLiveUnableDisplay:(_Bool)arg1;
- (_Bool)liveSetHidden:(_Bool)arg1;
- (_Bool)autoRemoveFromPIPLayerForDeAttach;
- (void)setAutoRemoveFromPIPLayerForDeAttach:(_Bool)arg1;
- (void)liveDeAttachFromSuperView;
- (void)liveAttachToSuperView:(id)arg1;
- (void)liveSetFrame:(struct CGRect)arg1;
- (id)liveMaskImg;
- (void)setLiveMaskImg:(id)arg1;
- (id)liveBusinessAttachId;
- (void)setLiveBusinessAttachId:(id)arg1;
- (id)liveBusinessId;
- (void)setLiveBusinessId:(id)arg1;
- (id)liveViewName;
- (void)setLiveViewName:(id)arg1;
- (struct CGRect)liveNormalizedFrame;
- (void)setLiveNormalizedFrame:(struct CGRect)arg1;
- (void)forceLiveDirty;
- (void)liveDirty;
- (_Bool)isLiveDirty;
- (_Bool)isConfigLiveDirtyHandle;
- (void)cancelLiveDirtyHandle;
- (void)configLiveDirtyHandle;
@end

