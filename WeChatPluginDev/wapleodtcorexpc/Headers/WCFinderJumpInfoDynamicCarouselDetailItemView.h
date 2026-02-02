//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebImageView, NSString, WCFinderJumpInfoDynamicCarouselDetailSubViewItem;

@interface WCFinderJumpInfoDynamicCarouselDetailItemView : UIView
{
    WCFinderJumpInfoDynamicCarouselDetailSubViewItem *_subViewItem;
    CDUnknownBlockType _contentSizeDidChangeBlock;
    MMWebImageView *_iconImageView;
    MMUILabel *_textLabel;
}

+ (id)createTextLabel;
+ (id)createIconImageView;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType contentSizeDidChangeBlock; // @synthesize contentSizeDidChangeBlock=_contentSizeDidChangeBlock;
@property(readonly, nonatomic) WCFinderJumpInfoDynamicCarouselDetailSubViewItem *subViewItem; // @synthesize subViewItem=_subViewItem;
- (void)onLoadImageOK:(id)arg1;
- (void)contentSizeDidChange;
- (void)layoutSubviews;
- (struct CGSize)iconSizeThatFitsWithMaxHeight:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateContent;
- (void)loadSubviews;
- (id)initWithSubViewItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

