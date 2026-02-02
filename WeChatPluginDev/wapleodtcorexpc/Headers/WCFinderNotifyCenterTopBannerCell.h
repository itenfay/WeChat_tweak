//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class ThankRedPackageInfo, WCFinderCustomImageRichTextView;

@interface WCFinderNotifyCenterTopBannerCell : UITableViewCell
{
    WCFinderCustomImageRichTextView *_bannerTextView;
    ThankRedPackageInfo *_bannerInfo;
    double _layoutWidth;
}

+ (double)cellHeight;
+ (_Bool)shouldShowWithBannerInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) ThankRedPackageInfo *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *bannerTextView; // @synthesize bannerTextView=_bannerTextView;
- (void)layoutUI;
- (void)updateWithBannerInfo:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

