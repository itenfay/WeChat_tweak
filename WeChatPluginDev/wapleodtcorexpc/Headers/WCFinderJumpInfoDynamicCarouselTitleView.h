//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSArray, NSString, WCFinderJumpInfoDynamicCarouselTitleViewItem;

@interface WCFinderJumpInfoDynamicCarouselTitleView : UIView
{
    WCFinderJumpInfoDynamicCarouselTitleViewItem *_viewItem;
    UIView *_iconImageContainerView;
    NSArray *_iconImageViews;
    MMUILabel *_textLabel;
    CDUnknownBlockType _contentSizeDidChangeBlock;
}

+ (id)createTextLabel;
+ (id)createIconImageView;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType contentSizeDidChangeBlock; // @synthesize contentSizeDidChangeBlock=_contentSizeDidChangeBlock;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) NSArray *iconImageViews; // @synthesize iconImageViews=_iconImageViews;
@property(retain, nonatomic) UIView *iconImageContainerView; // @synthesize iconImageContainerView=_iconImageContainerView;
@property(readonly, nonatomic) WCFinderJumpInfoDynamicCarouselTitleViewItem *viewItem; // @synthesize viewItem=_viewItem;
- (void)onLoadImageOK:(id)arg1;
- (void)contentSizeDidChange;
- (void)layoutSubviews;
- (struct CGSize)iconSizeThatFits:(id)arg1 withMaxHeight:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateContent;
- (void)updateViewItem:(id)arg1;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

