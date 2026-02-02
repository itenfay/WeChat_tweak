//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, UILabel, WCFinderDetailTimeStringConfig;

@interface WCFinderCollectionItemCell : UITableViewCell
{
    MMWebImageView *_coverImgView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    WCFinderDetailTimeStringConfig *_timeStringConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDetailTimeStringConfig *timeStringConfig; // @synthesize timeStringConfig=_timeStringConfig;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void)updateWithCollectionInfo:(id)arg1;

@end

