//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveKSKitLyricSentence, MMFinderLiveKSKitLyricSentenceView;

@interface MMFinderLiveKSKitLyricWrapper : NSObject
{
    _Bool _prepared;
    int _startTime;
    int _endTime;
    MMFinderLiveKSKitLyricSentenceView *_lyricTextView;
    MMFinderLiveKSKitLyricSentence *_sentence;
    double _maxWidth;
    long long _currState;
    struct CGSize _displayStateSize;
    struct CGSize _prepareStateSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long currState; // @synthesize currState=_currState;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool prepared; // @synthesize prepared=_prepared;
@property(nonatomic) int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) int startTime; // @synthesize startTime=_startTime;
@property(nonatomic) struct CGSize prepareStateSize; // @synthesize prepareStateSize=_prepareStateSize;
@property(nonatomic) struct CGSize displayStateSize; // @synthesize displayStateSize=_displayStateSize;
@property(retain, nonatomic) MMFinderLiveKSKitLyricSentence *sentence; // @synthesize sentence=_sentence;
@property(retain, nonatomic) MMFinderLiveKSKitLyricSentenceView *lyricTextView; // @synthesize lyricTextView=_lyricTextView;
- (double)prepareScaleRatio;
- (void)updateStartTime:(int)arg1 endTime:(int)arg2;
- (void)createLyricTextView:(id)arg1;
- (void)clearLyricWordsLabelWidth:(id)arg1;
- (void)extractLyricWordListToDisplay:(CDUnknownBlockType)arg1;
- (void)transferUIToDisappear;
- (void)transferUIToDisplay;
- (void)transferUIToPrepareAfter;
- (void)transferUIToPrepareBefore;
- (void)onPositionChanged:(int)arg1;
- (void)startTranferDisappearStateWithPreferDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startTransferDisplayStateToPositionY:(double)arg1 preferDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tranferPrepareStateAtPositionYDirectly:(double)arg1;
- (void)startTranferPrepareStateAtPositionY:(double)arg1 preferDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareToDisplay:(CDUnknownBlockType)arg1;
- (id)initWithLyricSentence:(id)arg1 maxWidth:(double)arg2;

@end

