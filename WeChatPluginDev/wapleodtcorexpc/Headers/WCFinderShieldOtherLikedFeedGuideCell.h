//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface WCFinderShieldOtherLikedFeedGuideCell : UITableViewCell
{
    UILabel *_tipsLabel;
    UIView *_lineView;
}

+ (double)heightWithInfo:(id)arg1 width:(double)arg2;
+ (id)createLabel;
+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)layoutContentViews;
- (void)layoutSubviews;
- (void)updateWithInfo:(id)arg1;

@end

