//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTableStyleCommentPubbleCellFrame, MMLiveCommentPubbleCellFrame, NSNumber, NSString;

@interface MMFinderLiveCommentTableViewCellFrame
{
    long long _layoutResult;
    _Bool _isHidePubbleCell;
    _Bool _needCustomAppend;
    _Bool _isReported;
    MMLiveCommentPubbleCellFrame *_pubbleCellFrame;
    long long _uiStyle;
    NSNumber *_customAppendPubbleCellInitTopValue;
    NSNumber *_customAppendDurationValue;
    NSNumber *_endDelayDurationValue;
    double _displayStartTime;
    double _totalDisplayTime;
    double _currentCellHeight;
    double _cellHeightPortrait;
    double _cellHeightLandscape;
    double _layoutStandardWidth;
    NSString *_layoutIdentityKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *layoutIdentityKey; // @synthesize layoutIdentityKey=_layoutIdentityKey;
@property(nonatomic) double layoutStandardWidth; // @synthesize layoutStandardWidth=_layoutStandardWidth;
@property(nonatomic) double cellHeightLandscape; // @synthesize cellHeightLandscape=_cellHeightLandscape;
@property(nonatomic) double cellHeightPortrait; // @synthesize cellHeightPortrait=_cellHeightPortrait;
@property(nonatomic) double currentCellHeight; // @synthesize currentCellHeight=_currentCellHeight;
@property(nonatomic) double totalDisplayTime; // @synthesize totalDisplayTime=_totalDisplayTime;
@property(nonatomic) double displayStartTime; // @synthesize displayStartTime=_displayStartTime;
@property(retain, nonatomic) NSNumber *endDelayDurationValue; // @synthesize endDelayDurationValue=_endDelayDurationValue;
@property(retain, nonatomic) NSNumber *customAppendDurationValue; // @synthesize customAppendDurationValue=_customAppendDurationValue;
@property(retain, nonatomic) NSNumber *customAppendPubbleCellInitTopValue; // @synthesize customAppendPubbleCellInitTopValue=_customAppendPubbleCellInitTopValue;
@property(nonatomic) _Bool isReported; // @synthesize isReported=_isReported;
@property(nonatomic) _Bool needCustomAppend; // @synthesize needCustomAppend=_needCustomAppend;
@property(nonatomic) _Bool isHidePubbleCell; // @synthesize isHidePubbleCell=_isHidePubbleCell;
@property(nonatomic) long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(retain, nonatomic) MMLiveCommentPubbleCellFrame *pubbleCellFrame; // @synthesize pubbleCellFrame=_pubbleCellFrame;
@property(readonly, nonatomic) MMFinderLiveTableStyleCommentPubbleCellFrame *finderPubbleCellFrame;
- (_Bool)isCurrentLayouted;
- (void)lazyCommentLayoutCurrent;
- (double)currCellHeight;
- (double)cellHeight;
- (void)resetCellFrame;
- (_Bool)isSupportTopDisplayInTable:(id)arg1;
@property(readonly, nonatomic) double minDisplayDuration;
- (void)calculateWithCommentInfo:(id)arg1 isFirstLine:(_Bool)arg2;
- (void)calculateWithCommentInfo:(id)arg1 isLastLine:(_Bool)arg2;

@end

