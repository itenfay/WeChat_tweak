//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel, WCFinderFeedLBSRecommendReasonViewConfig;

@interface WCFinderFeedLBSRecommendReasonView : UIView
{
    WCFinderFeedLBSRecommendReasonViewConfig *_config;
    UILabel *_label;
}

+ (id)viewWithImage:(id)arg1;
+ (id)attachmentWithImage:(id)arg1 size:(struct CGSize)arg2 font:(id)arg3;
+ (id)attachmentWithView:(id)arg1 font:(id)arg2;
+ (id)createClearPaddingAttrString:(double)arg1 font:(id)arg2;
+ (id)createReasonItemPaddingStr:(id)arg1 config:(id)arg2;
+ (id)createReasonItemStr:(id)arg1 config:(id)arg2;
+ (id)createReasonItemsStr:(id)arg1 config:(id)arg2;
+ (double)heightForReasonItems:(id)arg1 config:(id)arg2 width:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) WCFinderFeedLBSRecommendReasonViewConfig *config; // @synthesize config=_config;
- (void)updateWithReasonItems:(id)arg1 config:(id)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

