//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIActivityIndicatorView, MMUIImageView, MMUILabel, MMWebImageView, NSString, UIView;

@interface WCFinderTemplateChooseCollectionViewCell : UICollectionViewCell
{
    _Bool _showBoarder;
    MMWebImageView *_customImageView;
    MMUIActivityIndicatorView *_customLoadingView;
    MMUILabel *_templateNameLabel;
    MMUIImageView *_blankTemplateImgView;
    UIView *_backGroundBorderView;
}

+ (double)kTipsH;
+ (id)genTipsLabel;
+ (double)kCellWidth;
+ (struct CGSize)cellSize;
+ (id)cellID;
- (void).cxx_destruct;
@property(nonatomic) _Bool showBoarder; // @synthesize showBoarder=_showBoarder;
@property(retain, nonatomic) UIView *backGroundBorderView; // @synthesize backGroundBorderView=_backGroundBorderView;
@property(retain, nonatomic) MMUIImageView *blankTemplateImgView; // @synthesize blankTemplateImgView=_blankTemplateImgView;
@property(retain, nonatomic) MMUILabel *templateNameLabel; // @synthesize templateNameLabel=_templateNameLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *customLoadingView; // @synthesize customLoadingView=_customLoadingView;
@property(retain, nonatomic) MMWebImageView *customImageView; // @synthesize customImageView=_customImageView;
- (void)onLoadImageOK:(id)arg1;
- (void)updateWithMJTemplateInfo:(id)arg1;
- (void)updateWithOMJTemplateInfo:(id)arg1;
- (void)layoutSubviews;
- (void)reLayoutViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

