//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJSegmentPropertyAccessor, NSString, OMCSegment, OMJID, UBEmptySignal;

@interface MJSegmentViewModel : NSObject
{
    _Bool _isAnchored;
    _Bool _hasAudioClip;
    OMCSegment *_segment;
    OMJID *_segmentID;
    unsigned long long _segmentType;
    NSString *_segmentTitle;
    UBEmptySignal *_segmentDidMutateSignal;
    unsigned long long _segmentUIState;
    MJSegmentPropertyAccessor *_accessor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJSegmentPropertyAccessor *accessor; // @synthesize accessor=_accessor;
@property(nonatomic) unsigned long long segmentUIState; // @synthesize segmentUIState=_segmentUIState;
@property(readonly, nonatomic) UBEmptySignal *segmentDidMutateSignal; // @synthesize segmentDidMutateSignal=_segmentDidMutateSignal;
@property(readonly, nonatomic) _Bool hasAudioClip; // @synthesize hasAudioClip=_hasAudioClip;
@property(readonly, nonatomic) _Bool isAnchored; // @synthesize isAnchored=_isAnchored;
@property(retain, nonatomic) NSString *segmentTitle; // @synthesize segmentTitle=_segmentTitle;
@property(readonly, nonatomic) unsigned long long segmentType; // @synthesize segmentType=_segmentType;
@property(readonly, nonatomic) OMJID *segmentID; // @synthesize segmentID=_segmentID;
@property(readonly, nonatomic) OMCSegment *segment; // @synthesize segment=_segment;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)syncWithMutationEntry:(id)arg1;
- (void)cancelPrefetching;
- (void)prefetch;
@property(readonly, nonatomic) _Bool canTTS;
@property(readonly, nonatomic) _Bool canTrimByHandleBox;
@property(readonly, nonatomic) _Bool canEditStyleByHandleBox;
@property(readonly, nonatomic) _Bool canEditContentByHandleBox;
@property(readonly, nonatomic) _Bool canSyncPosition;
@property(readonly, nonatomic) _Bool canDelete;
@property(readonly, nonatomic) _Bool canTrim;
@property(readonly, nonatomic) _Bool canReplaceWhenAndWhere;
@property(readonly, nonatomic) _Bool canReplaceFancyText;
@property(readonly, nonatomic) _Bool canReplaceEmoticon;
@property(readonly, nonatomic) _Bool canEditLyricsStyle;
@property(readonly, nonatomic) _Bool canEditContentDescStyle;
@property(readonly, nonatomic) _Bool canEditMovieTitleStyle;
@property(readonly, nonatomic) _Bool canEditLocation;
@property(readonly, nonatomic) _Bool canEditTime;
@property(readonly, nonatomic) _Bool canEditCaptionText;
@property(readonly, nonatomic) _Bool canEditFancyText;
@property(readonly, nonatomic) _Bool canEditContentDesc;
@property(readonly, nonatomic) _Bool canEditMovieTitle;
@property(readonly, nonatomic) _Bool isSpeechRecognitionAvailable;
@property(readonly, nonatomic) _Bool isContentRangeAdjustableCurrently;
@property(readonly, nonatomic) _Bool isReversible;
@property(readonly, nonatomic) _Bool isTrimmable;
@property(readonly, nonatomic) _Bool isMovable;
@property(readonly, nonatomic) _Bool isDuplicable;
@property(readonly, nonatomic) _Bool isRemovable;
- (_Bool)isTextEditableAtPresentationTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)isCuttableAtPresentationTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) _Bool hasMultiSubtitles;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_e83c9415 absoluteTimeRange;
@property(readonly, nonatomic) CDStruct_e83c9415 playbackTimeRange;
@property(readonly, nonatomic) CDStruct_e83c9415 presentationTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationEndTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationStartTime;
- (void)dealloc;
- (void)syncWithSegmentImpl;
- (_Bool)syncWithSegment:(id)arg1;
- (id)initWithSegment:(id)arg1;

@end

