//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderSubtitleSentence, NSMutableArray, NSString, WCFinderFeedSubtitleViewModel;

@interface WCFinderFeedSubtitleView : UIView
{
    int _commentScene;
    WCFinderFeedSubtitleViewModel *_viewModel;
    FinderSubtitleSentence *_currentSentence;
    NSMutableArray *_displaySentenceArray;
    unsigned long long _displayIndex;
    double _maxSubtitleWidth;
    NSMutableArray *_subtitleLabelArray;
    unsigned long long _currentPosMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentPosMs; // @synthesize currentPosMs=_currentPosMs;
@property(retain, nonatomic) NSMutableArray *subtitleLabelArray; // @synthesize subtitleLabelArray=_subtitleLabelArray;
@property(nonatomic) double maxSubtitleWidth; // @synthesize maxSubtitleWidth=_maxSubtitleWidth;
@property(nonatomic) unsigned long long displayIndex; // @synthesize displayIndex=_displayIndex;
@property(retain, nonatomic) NSMutableArray *displaySentenceArray; // @synthesize displaySentenceArray=_displaySentenceArray;
@property(retain, nonatomic) FinderSubtitleSentence *currentSentence; // @synthesize currentSentence=_currentSentence;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderFeedSubtitleViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onWechatDisplayLanguageChanged;
- (unsigned long long)displayScentenceIndexAtPosMs:(unsigned long long)arg1;
- (void)onFinderFeedSubtitleShowLanguageChanged:(id)arg1;
- (id)genSubtitleLabel:(id)arg1;
- (void)updateLayout;
- (void)displayNextSentence;
- (void)addRemainWordWithArray:(id)arg1 index:(unsigned long long)arg2 language:(int)arg3;
- (id)splitSentence:(id)arg1 font:(id)arg2;
- (id)wordPosArrayInText:(id)arg1 wordArray:(id)arg2;
- (void)spliteSentenceIfNeeded;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)dealloc;
- (id)initWithContentVM:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

