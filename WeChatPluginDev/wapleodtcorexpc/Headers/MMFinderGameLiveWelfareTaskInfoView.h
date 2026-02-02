//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class LOTAnimationView, MMFinderGameLiveWelfareInfoViewModel, MMFinderGameLiveWelfareTaskCollectionView, MMWebImageView, NSString, UILabel;

@interface MMFinderGameLiveWelfareTaskInfoView : UIView
{
    CDUnknownBlockType _changeStateCompletion;
    CDUnknownBlockType _contentSizeDidChangeCallback;
    MMFinderGameLiveWelfareInfoViewModel *_viewModel;
    MMFinderGameLiveWelfareTaskCollectionView *_taskListView;
    LOTAnimationView *_pagPacketView;
    MMWebImageView *_customWebImageView;
    unsigned long long _currentStatus;
    NSString *_lastLuckBagWelfareId;
    UILabel *_tipLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) NSString *lastLuckBagWelfareId; // @synthesize lastLuckBagWelfareId=_lastLuckBagWelfareId;
@property(nonatomic) unsigned long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(retain, nonatomic) MMWebImageView *customWebImageView; // @synthesize customWebImageView=_customWebImageView;
@property(retain, nonatomic) LOTAnimationView *pagPacketView; // @synthesize pagPacketView=_pagPacketView;
@property(retain, nonatomic) MMFinderGameLiveWelfareTaskCollectionView *taskListView; // @synthesize taskListView=_taskListView;
@property(retain, nonatomic) MMFinderGameLiveWelfareInfoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType contentSizeDidChangeCallback; // @synthesize contentSizeDidChangeCallback=_contentSizeDidChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType changeStateCompletion; // @synthesize changeStateCompletion=_changeStateCompletion;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)getCurrentUITypeForDataReport;
- (void)reportClickGameWelfare:(_Bool)arg1 status:(unsigned long long)arg2;
- (void)updateViewModel:(id)arg1;
- (void)onClickWelfareTaskInfoView:(id)arg1;
- (void)finishLuckBagReceiveAnimation;
- (void)showLuckBagReceived;
- (void)updateData;
- (void)startCarouselTaskAnimated:(_Bool)arg1;
- (void)updateHiddenStatus:(_Bool)arg1;
- (void)updateGameLiveWelfareTaskInfoViewShowStatus:(unsigned long long)arg1;
- (void)layoutPagPacketView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupUI;
- (id)init;

@end

