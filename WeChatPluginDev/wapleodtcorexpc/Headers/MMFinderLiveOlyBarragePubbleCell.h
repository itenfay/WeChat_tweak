//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveBarragePubbleCellFrame, MMFinderLiveOlyBarragePubbleTravel, NSString, RichTextView, UIImageView;

@interface MMFinderLiveOlyBarragePubbleCell : UIView
{
    CDUnknownBlockType _tapCallback;
    CDUnknownBlockType _prepareForReuseCallback;
    MMFinderLiveOlyBarragePubbleTravel *_barrageTravel;
    long long _uiStyle;
    long long _currTheme;
    MMFinderLiveBarragePubbleCellFrame *_cellFrame;
    UIView *_pubbleBackView;
    RichTextView *_contentLabel;
    UIImageView *_starIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *starIconView; // @synthesize starIconView=_starIconView;
@property(retain, nonatomic) RichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *pubbleBackView; // @synthesize pubbleBackView=_pubbleBackView;
@property(retain, nonatomic) MMFinderLiveBarragePubbleCellFrame *cellFrame; // @synthesize cellFrame=_cellFrame;
@property(nonatomic) long long currTheme; // @synthesize currTheme=_currTheme;
@property(nonatomic) long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(retain, nonatomic) MMFinderLiveOlyBarragePubbleTravel *barrageTravel; // @synthesize barrageTravel=_barrageTravel;
@property(copy, nonatomic) CDUnknownBlockType prepareForReuseCallback; // @synthesize prepareForReuseCallback=_prepareForReuseCallback;
@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
- (void)onBarragePubbleTap:(id)arg1;
- (void)addGestures;
@property(readonly, nonatomic) struct CGSize cellSize;
- (int)getCurrentCellFrameLayoutStyle;
- (void)display;
- (void)displayFinish;
- (void)configBarragePubbleTravel:(id)arg1 withContainerView:(id)arg2;
- (void)updateTheme:(long long)arg1;
- (void)updatePubbleStyle:(long long)arg1;
- (void)updateCellFrame:(id)arg1;
- (void)resetCellFrame:(id)arg1;
- (id)contentColor;
- (id)starIconImage;
- (void)updateContentLabelOrigin;
- (void)updateStarIconViewOrigin;
- (void)layoutContentLabel;
- (void)layoutStarIconView;
- (void)layoutPubbleBackView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithCellFrame:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

