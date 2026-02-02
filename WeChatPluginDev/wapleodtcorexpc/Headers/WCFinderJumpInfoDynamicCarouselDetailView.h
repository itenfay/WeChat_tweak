//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, WCFinderJumpInfoDynamicCarouselDetailViewItem;

@interface WCFinderJumpInfoDynamicCarouselDetailView : UIView
{
    WCFinderJumpInfoDynamicCarouselDetailViewItem *_viewItem;
    CDUnknownBlockType _contentSizeDidChangeBlock;
    UIView *_contentView;
    NSArray *_itemViews;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType contentSizeDidChangeBlock; // @synthesize contentSizeDidChangeBlock=_contentSizeDidChangeBlock;
@property(readonly, nonatomic) WCFinderJumpInfoDynamicCarouselDetailViewItem *viewItem; // @synthesize viewItem=_viewItem;
- (void)contentSizeDidChange;
- (void)layoutContentSubviews;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateCarouselContent;
- (void)switchCarouselWithViewItem:(id)arg1 animation:(long long)arg2;
- (void)reloadContentViewWithViewItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

