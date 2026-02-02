//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class BTFinderInterestCellContainerView, BTRichTextTagView, MMUILabel, NSString, UIView, WCFinderFeedImageCDNView, WCFinderMPInterestData;

@interface BTFinderInterestItemCell : UICollectionViewCell
{
    CDUnknownBlockType _onClickCoverAreaBlock;
    CDUnknownBlockType _onLongClickCoverAreaBlock;
    BTFinderInterestCellContainerView *_containerView;
    WCFinderFeedImageCDNView *_topCoverView;
    WCFinderFeedImageCDNView *_middleCoverView;
    UIView *_middleCoverBgView;
    WCFinderFeedImageCDNView *_bottomCoverView;
    BTRichTextTagView *_textView;
    MMUILabel *_recommendLabel;
    WCFinderMPInterestData *_interestData;
}

+ (double)cellWidth;
+ (double)cellHeight;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMPInterestData *interestData; // @synthesize interestData=_interestData;
@property(retain, nonatomic) MMUILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) BTRichTextTagView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *bottomCoverView; // @synthesize bottomCoverView=_bottomCoverView;
@property(retain, nonatomic) UIView *middleCoverBgView; // @synthesize middleCoverBgView=_middleCoverBgView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *middleCoverView; // @synthesize middleCoverView=_middleCoverView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *topCoverView; // @synthesize topCoverView=_topCoverView;
@property(retain, nonatomic) BTFinderInterestCellContainerView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType onLongClickCoverAreaBlock; // @synthesize onLongClickCoverAreaBlock=_onLongClickCoverAreaBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickCoverAreaBlock; // @synthesize onClickCoverAreaBlock=_onClickCoverAreaBlock;
- (void)doShareAnimation;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (id)textViewStylesWithText:(id)arg1;
- (void)onLongClickContentArea;
- (void)onClickContentArea;
- (void)updateCoverView:(id)arg1 withDataItem:(id)arg2;
- (void)loadData;
- (void)setupSubviews;
- (void)setContentAreaHighlight:(_Bool)arg1;
- (void)updateWithInterestData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

