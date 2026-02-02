//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingIndicatorView, NSString, PAGView, UIImageView, UILabel, UIView;

@interface PalmGuidingTipsView
{
    _Bool _needFlippedLeft;
    int _currentTipCode;
    UIView *_imageBgView;
    PAGView *_pagView;
    UIImageView *_tipsImageView;
    MMLoadingIndicatorView *_loadingIndicator;
    UILabel *_tipsLabel;
    unsigned long long _currentHandType;
    NSString *_currentTipText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needFlippedLeft; // @synthesize needFlippedLeft=_needFlippedLeft;
@property(copy, nonatomic) NSString *currentTipText; // @synthesize currentTipText=_currentTipText;
@property(nonatomic) unsigned long long currentHandType; // @synthesize currentHandType=_currentHandType;
@property(nonatomic) int currentTipCode; // @synthesize currentTipCode=_currentTipCode;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMLoadingIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIImageView *tipsImageView; // @synthesize tipsImageView=_tipsImageView;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) UIView *imageBgView; // @synthesize imageBgView=_imageBgView;
- (void)updatePagView;
- (void)showPagView:(id)arg1;
- (void)onlyShowLoadingImageView;
- (void)onlyShowTipsImageView;
- (void)onlyShowPagView;
- (void)updateView;
- (void)updateHandType:(unsigned long long)arg1;
- (void)updateWithTipCode:(int)arg1 tipText:(id)arg2 handType:(unsigned long long)arg3;
- (id)initWithTipCode:(int)arg1 tipText:(id)arg2 handType:(unsigned long long)arg3;

@end

