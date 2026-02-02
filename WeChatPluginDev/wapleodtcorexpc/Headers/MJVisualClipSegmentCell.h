//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTileStripView, NSString;
@protocol MJTileStripViewManager;

@interface MJVisualClipSegmentCell
{
    _Bool _isSegmentInfoOverlayVisible;
    MJTileStripView *_tileStripView;
    id <MJTileStripViewManager> _tileStripViewManager;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSegmentInfoOverlayVisible; // @synthesize isSegmentInfoOverlayVisible=_isSegmentInfoOverlayVisible;
@property(nonatomic) __weak id <MJTileStripViewManager> tileStripViewManager; // @synthesize tileStripViewManager=_tileStripViewManager;
@property(retain, nonatomic) MJTileStripView *tileStripView; // @synthesize tileStripView=_tileStripView;
- (id)muteInfoOverlay;
- (id)durationInfoOverlay;
- (void)updateOverlay;
- (void)enqueueTileStripViewIfNeeded;
- (void)addTileTileStripViewIfNeeded;
- (void)addTileStripView:(id)arg1;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)syncWithMutation;
- (void)syncWithSegmentUIState;
- (void)prepareForReuse;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupthumbPlaceholder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

