//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJPlaybackViewModel, MJTimelineViewModel, NSArray, NSMutableDictionary, OMJAspectRatio;

@interface MJTimelineCanvasEditViewModel : NSObject
{
    MJTimelineViewModel *_timelineVM;
    MJPlaybackViewModel *_playbackVM;
    NSArray *_cellItems;
    long long _selectedItemIndex;
    CDUnknownBlockType _updateSelectionHandler;
    NSMutableDictionary *_originalSegmentLayerSpatialInfos;
    OMJAspectRatio *_originalAspectRatio;
    unsigned long long _originalContentScaleMode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long originalContentScaleMode; // @synthesize originalContentScaleMode=_originalContentScaleMode;
@property(retain, nonatomic) OMJAspectRatio *originalAspectRatio; // @synthesize originalAspectRatio=_originalAspectRatio;
@property(retain, nonatomic) NSMutableDictionary *originalSegmentLayerSpatialInfos; // @synthesize originalSegmentLayerSpatialInfos=_originalSegmentLayerSpatialInfos;
@property(copy, nonatomic) CDUnknownBlockType updateSelectionHandler; // @synthesize updateSelectionHandler=_updateSelectionHandler;
@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(retain, nonatomic) NSArray *cellItems; // @synthesize cellItems=_cellItems;
@property(retain, nonatomic) MJPlaybackViewModel *playbackVM; // @synthesize playbackVM=_playbackVM;
@property(retain, nonatomic) MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
- (_Bool)hasChanges;
- (void)handleSelectItemAtIndexPath:(id)arg1;
- (void)setupData;
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;

@end

