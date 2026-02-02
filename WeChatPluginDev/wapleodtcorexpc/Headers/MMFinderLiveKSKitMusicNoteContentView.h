//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface MMFinderLiveKSKitMusicNoteContentView : UIView
{
    _Bool _isStart;
    int _currKalaPostion;
    double _prepareAdvanceTimeOffset;
    CDUnknownBlockType _noteContentGetNextBatchListCallback;
    UIColor *_notesColor;
    double _afterWardContentOffset;
    double _afterWardTimeOffset;
    double _advanceContentOffset;
    double _displayAdvanceTimeOffset;
    NSMutableArray *_displayingSegmentList;
    NSMutableArray *_pendingSegmentList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingSegmentList; // @synthesize pendingSegmentList=_pendingSegmentList;
@property(retain, nonatomic) NSMutableArray *displayingSegmentList; // @synthesize displayingSegmentList=_displayingSegmentList;
@property(nonatomic) int currKalaPostion; // @synthesize currKalaPostion=_currKalaPostion;
@property(nonatomic) double displayAdvanceTimeOffset; // @synthesize displayAdvanceTimeOffset=_displayAdvanceTimeOffset;
@property(nonatomic) double advanceContentOffset; // @synthesize advanceContentOffset=_advanceContentOffset;
@property(nonatomic) double afterWardTimeOffset; // @synthesize afterWardTimeOffset=_afterWardTimeOffset;
@property(nonatomic) double afterWardContentOffset; // @synthesize afterWardContentOffset=_afterWardContentOffset;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(retain, nonatomic) UIColor *notesColor; // @synthesize notesColor=_notesColor;
@property(copy, nonatomic) CDUnknownBlockType noteContentGetNextBatchListCallback; // @synthesize noteContentGetNextBatchListCallback=_noteContentGetNextBatchListCallback;
@property(nonatomic) double prepareAdvanceTimeOffset; // @synthesize prepareAdvanceTimeOffset=_prepareAdvanceTimeOffset;
- (void)clearDatas;
- (id)getNextBatchMusicNoteList;
- (id)createMusicNoteSegmentView;
- (void)preparePendingSegment;
- (void)updatePrepareAdvanceTimeOffset;
- (void)updateDisplayAdvanceTimeOffset;
- (void)checkDisOfKalaPositionAndSegmentDisplay:(id)arg1;
- (void)onSegmentMoveCompletely:(id)arg1;
- (void)startDisplaySegment:(id)arg1;
- (void)monitorLastSegmentDisplayCompletely;
- (_Bool)isCurrLastSegmentDisplayCompletely;
- (void)checkIsTimeToDisplayNextSegment;
- (void)onNotifyTimeToPrepareNextBatchMusicNotes;
- (void)onKSKitKalaPositionChanged:(int)arg1;
- (void)stop;
- (void)start;
- (void)updateAdvanceContentOffset:(double)arg1;
- (void)updateAfterWardTimeOffset;
- (void)updateAfterWardContentOffset:(double)arg1;
- (void)layoutSubviews;
- (void)initDefaultDatas;
- (id)init;

@end

