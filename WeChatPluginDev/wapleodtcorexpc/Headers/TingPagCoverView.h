//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, PAGFile, PAGView, TingCoverInfo;
@protocol TingPagCoverViewDelegate;

@interface TingPagCoverView : UIView
{
    id <TingPagCoverViewDelegate> _delegate;
    TingCoverInfo *_viewModel;
    PAGView *_pagView;
    PAGFile *_tmplFile;
    UIView *_highlightedMaskView;
}

+ (void)applyPAGImage:(id)arg1 forIndex:(unsigned long long)arg2 tmpl:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedMaskView; // @synthesize highlightedMaskView=_highlightedMaskView;
@property(retain, nonatomic) PAGFile *tmplFile; // @synthesize tmplFile=_tmplFile;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) TingCoverInfo *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <TingPagCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)pagFilePathFromCoverInfo:(id)arg1;
- (id)pagFileFromCoverInfo:(id)arg1;
- (id)pagFile;
- (void)flush;
- (void)ImageDidFail:(id)arg1;
- (void)onFetchImage:(id)arg1 indexes:(id)arg2 url:(id)arg3;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (_Bool)isLegalPAGCoverStyle:(unsigned int)arg1;
- (unsigned long long)maxFetchingCount;
- (void)startLoadImgFromLocal;
- (void)starRequestTmplCoverUrls;
- (void)reloadWithPAGFile:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)checkoutCoversIsEqual:(id)arg1;
- (void)applyCoverInfo:(id)arg1;
- (void)prepareForReuse;
- (void)freeCache;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initHighlighedView;
- (void)initPagView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

