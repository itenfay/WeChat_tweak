//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSMutableArray, UIColor;

@interface MMFinderLiveKSKitMusicNoteSegmentView : UIView
{
    _Bool _isAnimating;
    int _beginTimeOffset;
    int _endTimeOffset;
    UIColor *_notesColor;
    NSMutableArray *_musicNoteLineList;
    double _currMaxContentWidth;
    CDUnknownBlockType _moveOffsetChangeCallback;
    CADisplayLink *_monitorDisplayLink;
    CDUnknownBlockType _moveCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType moveCompletion; // @synthesize moveCompletion=_moveCompletion;
@property(retain, nonatomic) CADisplayLink *monitorDisplayLink; // @synthesize monitorDisplayLink=_monitorDisplayLink;
@property(copy, nonatomic) CDUnknownBlockType moveOffsetChangeCallback; // @synthesize moveOffsetChangeCallback=_moveOffsetChangeCallback;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) double currMaxContentWidth; // @synthesize currMaxContentWidth=_currMaxContentWidth;
@property(retain, nonatomic) NSMutableArray *musicNoteLineList; // @synthesize musicNoteLineList=_musicNoteLineList;
@property(retain, nonatomic) UIColor *notesColor; // @synthesize notesColor=_notesColor;
@property(nonatomic) int endTimeOffset; // @synthesize endTimeOffset=_endTimeOffset;
@property(nonatomic) int beginTimeOffset; // @synthesize beginTimeOffset=_beginTimeOffset;
@property(readonly, nonatomic) _Bool isStartMoveOffsetMonitor;
- (void)onMoveCompleted;
- (void)cancelMoveOffsetMonitor;
- (void)onMoveOffsetMonitorDisplaylink:(id)arg1;
- (void)startMoveOffsetMonitorIfNeed;
- (void)startMove:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelMonitorSegmentMoveOffsetChange;
- (void)monitorSegmentMoveOffsetChange:(CDUnknownBlockType)arg1;
- (double)currentRight;
- (double)preferWidth;
- (void)layoutMusicNoteLines;
- (void)layoutSubviews;
- (void)addMusicNoteLinesToView;
- (void)createMusicNoteLines:(id)arg1;
- (id)initWithMusicNotes:(id)arg1;

@end

