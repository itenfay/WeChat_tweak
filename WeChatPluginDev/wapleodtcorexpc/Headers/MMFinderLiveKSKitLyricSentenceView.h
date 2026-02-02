//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveKSKitLyricSentenceTextView, NSArray, NSString;

@interface MMFinderLiveKSKitLyricSentenceView : UIView
{
    int _startTime;
    int _endTime;
    NSArray *_lyricWords;
    MMFinderLiveKSKitLyricSentenceTextView *_unSingSentenceView;
    MMFinderLiveKSKitLyricSentenceTextView *_singSentenceView;
    UIView *_singSentenceMaskContentView;
    double _singLeftInset;
}

+ (id)lyricWordFont;
- (void).cxx_destruct;
@property(nonatomic) double singLeftInset; // @synthesize singLeftInset=_singLeftInset;
@property(nonatomic) int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) int startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UIView *singSentenceMaskContentView; // @synthesize singSentenceMaskContentView=_singSentenceMaskContentView;
@property(retain, nonatomic) MMFinderLiveKSKitLyricSentenceTextView *singSentenceView; // @synthesize singSentenceView=_singSentenceView;
@property(retain, nonatomic) MMFinderLiveKSKitLyricSentenceTextView *unSingSentenceView; // @synthesize unSingSentenceView=_unSingSentenceView;
@property(retain, nonatomic) NSArray *lyricWords; // @synthesize lyricWords=_lyricWords;
- (void)drawInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)updateSingLeftInset:(double)arg1;
- (double)getSingLeftInset:(int)arg1;
- (void)updateSentenceSingProgress:(int)arg1;
- (id)createSentenceMaskContentView:(struct CGSize)arg1;
- (void)updateSentenceViewsOrigin;
- (void)updateSelfSize:(struct CGSize)arg1;
- (void)createSentenceViews;
- (void)onPositionChanged:(int)arg1;
- (void)layoutSubviews;
- (id)initWithLyricWords:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

