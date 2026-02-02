//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;
@protocol MMFinderLiveTagsLabelDelegate;

@interface MMFinderLiveTagsLabel : UIView
{
    id <MMFinderLiveTagsLabelDelegate> _delegate;
    NSArray *_tags;
    double _spacing;
    UILabel *_label;
    NSArray *_imageViews;
    struct CGSize _tagEstimateSize;
}

+ (struct CGSize)estimateSizeWithContent:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 maxLines:(unsigned long long)arg4 tags:(id)arg5 tagEstimateSize:(struct CGSize)arg6 spacing:(double)arg7 inWidth:(double)arg8;
+ (struct CGSize)estimateSizeWithProduct:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 maxLines:(unsigned long long)arg4 tagEstimateSize:(struct CGSize)arg5 spacing:(double)arg6 inWidth:(double)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct CGSize tagEstimateSize; // @synthesize tagEstimateSize=_tagEstimateSize;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) __weak id <MMFinderLiveTagsLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLoadImageOK:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updatePre:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithProduct:(id)arg1 lineHeight:(double)arg2 font:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

