//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, UILabel, UIView, WCFinderDetailTimeStringConfig, WCFinderFeedContentTextView;

@interface WCFinderMemberShipSearchResultCell : UITableViewCell
{
    WCFinderFeedContentTextView *_textView;
    MMWebImageView *_coverImgView;
    UILabel *_nameLabel;
    WCFinderDetailTimeStringConfig *_timeStringConfig;
    UILabel *_descLabel;
    UIView *_separatorView;
}

+ (double)getHorizontalPadding;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderDetailTimeStringConfig *timeStringConfig; // @synthesize timeStringConfig=_timeStringConfig;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(retain, nonatomic) WCFinderFeedContentTextView *textView; // @synthesize textView=_textView;
- (void)updateWithSearchInfo:(id)arg1;

@end

