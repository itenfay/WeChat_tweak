//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveDropGiftViewModel, NSString, PAGFile, PAGView, UIImageView, UILabel;
@protocol MMFinderLiveDropGiftViewDelegate;

@interface MMFinderLiveDropGiftView : UIView
{
    _Bool _repeated;
    id <MMFinderLiveDropGiftViewDelegate> _delegate;
    PAGView *_pagView;
    PAGFile *_pagFile;
    UIImageView *_imageView;
    UIView *_containerView;
    UILabel *_tipsLabel;
    MMFinderLiveDropGiftViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveDropGiftViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) PAGFile *pagFile; // @synthesize pagFile=_pagFile;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(nonatomic, getter=isRepeated) _Bool repeated; // @synthesize repeated=_repeated;
@property(nonatomic) __weak id <MMFinderLiveDropGiftViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDropGiftViewDisplayStatusChange:(id)arg1 needShow:(_Bool)arg2;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onClickView:(id)arg1;
- (void)stop;
- (void)play;
- (void)updateViewModel:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

