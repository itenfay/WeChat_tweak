//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayout.h>

@class MJTimelineLayoutCalculator, MJTimelineViewModel, NSIndexPath, NSMutableDictionary, NSSet;

@interface MJTimelineCollectionViewLayout : UICollectionViewLayout
{
    _Bool _isAnimatingForBoundsChange;
    MJTimelineViewModel *_viewModel;
    NSIndexPath *_trimPrepareSegmentIndexPath;
    MJTimelineLayoutCalculator *_layoutCalc;
    NSMutableDictionary *_cellAttributesByIndexPath;
    NSMutableDictionary *_trimHandleAttributesByIndexPath;
    NSMutableDictionary *_musicSegmentPlaceholderViewAttributesByIndexPath;
    NSMutableDictionary *_narrationSegmentPlaceholderViewAttributesByIndexPath;
    NSMutableDictionary *_timelineLeadingAccessoryViewAttributesByIndexPath;
    NSMutableDictionary *_timelineVolumeAccessoryViewAttributesByIndexPath;
    NSMutableDictionary *_OSTRecognitionRetryAccessoryViewAttributesByIndexPath;
    NSSet *_transitionSegmentIndexPathsToSendBack;
    NSMutableDictionary *_initialCellLayoutAttributesByIndexPath;
    NSMutableDictionary *_finalCellLayoutAttributesByIndexPath;
    struct CGPoint _targetContentOffsetOnce;
    struct CGSize _oldContentSize;
    struct CGSize _deltaContentSize;
    struct UIEdgeInsets _timelineViewContentInsets;
    struct UIEdgeInsets _trimHandleInsets;
    struct CGRect _deltaBounds;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
+ (id)OSTRecognitionRetryAccessoryViewIndexPath;
+ (id)timelineVolumeAccessoryViewIndexPath;
+ (id)timelineLeadingAccessoryViewIndexPath;
+ (id)narrationSegmentPlaceholderViewIndexPath;
+ (id)musicSegmentPlaceholderViewIndexPath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *finalCellLayoutAttributesByIndexPath; // @synthesize finalCellLayoutAttributesByIndexPath=_finalCellLayoutAttributesByIndexPath;
@property(retain, nonatomic) NSMutableDictionary *initialCellLayoutAttributesByIndexPath; // @synthesize initialCellLayoutAttributesByIndexPath=_initialCellLayoutAttributesByIndexPath;
@property(nonatomic) struct CGRect deltaBounds; // @synthesize deltaBounds=_deltaBounds;
@property(nonatomic) struct CGSize deltaContentSize; // @synthesize deltaContentSize=_deltaContentSize;
@property(nonatomic) struct CGSize oldContentSize; // @synthesize oldContentSize=_oldContentSize;
@property(nonatomic) _Bool isAnimatingForBoundsChange; // @synthesize isAnimatingForBoundsChange=_isAnimatingForBoundsChange;
@property(retain, nonatomic) NSSet *transitionSegmentIndexPathsToSendBack; // @synthesize transitionSegmentIndexPathsToSendBack=_transitionSegmentIndexPathsToSendBack;
@property(nonatomic) struct UIEdgeInsets trimHandleInsets; // @synthesize trimHandleInsets=_trimHandleInsets;
@property(retain, nonatomic) NSMutableDictionary *OSTRecognitionRetryAccessoryViewAttributesByIndexPath; // @synthesize OSTRecognitionRetryAccessoryViewAttributesByIndexPath=_OSTRecognitionRetryAccessoryViewAttributesByIndexPath;
@property(retain, nonatomic) NSMutableDictionary *timelineVolumeAccessoryViewAttributesByIndexPath; // @synthesize timelineVolumeAccessoryViewAttributesByIndexPath=_timelineVolumeAccessoryViewAttributesByIndexPath;
@property(retain, nonatomic) NSMutableDictionary *timelineLeadingAccessoryViewAttributesByIndexPath; // @synthesize timelineLeadingAccessoryViewAttributesByIndexPath=_timelineLeadingAccessoryViewAttributesByIndexPath;
@property(retain, nonatomic) NSMutableDictionary *narrationSegmentPlaceholderViewAttributesByIndexPath; // @synthesize narrationSegmentPlaceholderViewAttributesByIndexPath=_narrationSegmentPlaceholderViewAttributesByIndexPath;
@property(retain, nonatomic) NSMutableDictionary *musicSegmentPlaceholderViewAttributesByIndexPath; // @synthesize musicSegmentPlaceholderViewAttributesByIndexPath=_musicSegmentPlaceholderViewAttributesByIndexPath;
@property(retain, nonatomic) NSMutableDictionary *trimHandleAttributesByIndexPath; // @synthesize trimHandleAttributesByIndexPath=_trimHandleAttributesByIndexPath;
@property(retain, nonatomic) NSMutableDictionary *cellAttributesByIndexPath; // @synthesize cellAttributesByIndexPath=_cellAttributesByIndexPath;
@property(retain, nonatomic) MJTimelineLayoutCalculator *layoutCalc; // @synthesize layoutCalc=_layoutCalc;
@property(retain, nonatomic) NSIndexPath *trimPrepareSegmentIndexPath; // @synthesize trimPrepareSegmentIndexPath=_trimPrepareSegmentIndexPath;
@property(nonatomic) struct UIEdgeInsets timelineViewContentInsets; // @synthesize timelineViewContentInsets=_timelineViewContentInsets;
@property(nonatomic) struct CGPoint targetContentOffsetOnce; // @synthesize targetContentOffsetOnce=_targetContentOffsetOnce;
@property(readonly, nonatomic) MJTimelineViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)invalidationContextForTimelineInsetsChange:(struct UIEdgeInsets)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)invalidateLayoutForModeChange;
- (void)invalidateLayoutForScaleChange;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 layoutCalc:(id)arg2;
- (id)transformLayoutAttributes:(id)arg1 filter:(CDUnknownBlockType)arg2 transformer:(CDUnknownBlockType)arg3;
- (void)updateDeltaContentSizeIfNeeded:(struct CGSize)arg1;
- (id)internalFinalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)internalInitialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)internalFinalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)internalInitialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)internalFinalizeAnimatedBoundsChange;
- (void)internalPrepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChangeFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)boundsWillChangeBeforeInvalidateFromBounds:(struct CGRect)arg1 toBounds:(struct CGRect)arg2;
- (id)internalLayoutAttributesForItemAtIndexPath:(id)arg1 withContentOffset:(struct CGPoint)arg2 maxContentOffsetY:(double)arg3;
- (id)internalLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForOSTRecognitionRetryAccessoryViewAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForTimelineVolumeAccessoryViewAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForTimelineLeadingAccessoryViewAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForNarrationSegmentPlaceholderViewAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForMusicSegmentPlaceholderViewAtIndexPath:(id)arg1;
- (id)layoutAttributesForOSTRecognitionRetryAccessoryViewAtIndexPath:(id)arg1;
- (id)layoutAttributesForTimelineVolumeAccessoryViewAtIndexPath:(id)arg1;
- (id)layoutAttributesForTimelineLeadingAccessoryViewAtIndexPath:(id)arg1;
- (id)layoutAttributesForNarrationSegmentPlaceholderViewAtIndexPath:(id)arg1;
- (id)layoutAttributesForMusicSegmentPlaceholderViewAtIndexPath:(id)arg1;
- (void)trimPrepareSegmentIndexPathDidChange:(id)arg1;
- (id)layoutAttributesForTrimHandleAtIndexPath:(id)arg1;

@end

