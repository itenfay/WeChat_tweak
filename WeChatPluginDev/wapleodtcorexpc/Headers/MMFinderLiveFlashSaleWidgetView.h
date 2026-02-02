//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveFlashSaleInfo, MMCountDownLabel, NSString, NSURL, UIImageView;

@interface MMFinderLiveFlashSaleWidgetView : UIView
{
    CDUnknownBlockType _onFlashSaleFinish;
    CDUnknownBlockType _onClicked;
    FinderLiveFlashSaleInfo *_info;
    UIView *_contentView;
    UIImageView *_productImageView;
    UIView *_shadowView;
    MMCountDownLabel *_countDownLabel;
    UIImageView *_tagView;
    NSURL *_currentImageURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *currentImageURL; // @synthesize currentImageURL=_currentImageURL;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) MMCountDownLabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) FinderLiveFlashSaleInfo *info; // @synthesize info=_info;
@property(copy, nonatomic) CDUnknownBlockType onClicked; // @synthesize onClicked=_onClicked;
@property(copy, nonatomic) CDUnknownBlockType onFlashSaleFinish; // @synthesize onFlashSaleFinish=_onFlashSaleFinish;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)startEntrance;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (void)onTap;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithInfo:(id)arg1 width:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

