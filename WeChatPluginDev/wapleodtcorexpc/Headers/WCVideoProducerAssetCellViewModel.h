//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAssetInfo, OMJClipSegment;

@interface WCVideoProducerAssetCellViewModel : NSObject
{
    _Bool _isSegmentModified;
    _Bool _isSelected;
    _Bool _isEditing;
    MMAssetInfo *_assetInfo;
    OMJClipSegment *_clipSegment;
    unsigned long long _editCount;
    unsigned long long _modifyCount;
    long long _cellOrder;
    CDStruct_e83c9415 _modifiedAssetTimeRangeInSegment;
}

+ (id)sectionId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) CDStruct_e83c9415 modifiedAssetTimeRangeInSegment; // @synthesize modifiedAssetTimeRangeInSegment=_modifiedAssetTimeRangeInSegment;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long cellOrder; // @synthesize cellOrder=_cellOrder;
@property(nonatomic) unsigned long long modifyCount; // @synthesize modifyCount=_modifyCount;
@property(nonatomic) unsigned long long editCount; // @synthesize editCount=_editCount;
@property(nonatomic) _Bool isSegmentModified; // @synthesize isSegmentModified=_isSegmentModified;
@property(retain, nonatomic) OMJClipSegment *clipSegment; // @synthesize clipSegment=_clipSegment;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (CDStruct_e83c9415)_getFixedTimeRangeWithPreferedStartTime:(double)arg1;
- (id)generateClipAssetInfoMapWithTimeScale:(unsigned int)arg1;
- (id)generateClipAssetInfoMap;
- (CDStruct_e83c9415)getSegmentCurrentTimeRange;
- (void)applyModifiedSegment;
- (void)resetDefaultSegmentTimeRange;
- (void)modifySegmentStartTimeSec:(double)arg1;
- (void)onEditingSegmentStartTimeSec:(double)arg1;
- (id)initWithAssetInfo:(id)arg1 clipSegment:(id)arg2;

@end

