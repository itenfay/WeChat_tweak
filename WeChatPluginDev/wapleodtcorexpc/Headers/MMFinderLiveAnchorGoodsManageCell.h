//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAnchorGoodsCellLeftCardView, MMFinderLiveGoodsCellSubInfosView, MMFinderLiveTagsLabel, MMUIView, NSString, UITapGestureRecognizer;
@protocol MMFinderLiveAnchorGoodsCellManageDelegate;

@interface MMFinderLiveAnchorGoodsManageCell
{
    MMFinderLiveAnchorGoodsCellLeftCardView *_leftCardView;
    MMFinderLiveTagsLabel *_goodsTitleLabel;
    MMFinderLiveGoodsCellSubInfosView *_subInfosView;
    UITapGestureRecognizer *_gestureRecognizer;
    MMUIView *_backGroundClickView;
}

+ (double)imageWidthForCellWidth:(double)arg1;
+ (double)cellHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *backGroundClickView; // @synthesize backGroundClickView=_backGroundClickView;
@property(retain, nonatomic) UITapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) MMFinderLiveGoodsCellSubInfosView *subInfosView; // @synthesize subInfosView=_subInfosView;
@property(retain, nonatomic) MMFinderLiveTagsLabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) MMFinderLiveAnchorGoodsCellLeftCardView *leftCardView; // @synthesize leftCardView=_leftCardView;
- (id)accessibilityAttributedLabel;
- (id)unSelectedImageForSelectedButton;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTapGesture:(id)arg1;
- (void)addBackGroundClickView;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)onWebImageGetDifferentSize;
- (void)addGoodsTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <MMFinderLiveAnchorGoodsCellManageDelegate> cellDelegate; // @dynamic cellDelegate;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

