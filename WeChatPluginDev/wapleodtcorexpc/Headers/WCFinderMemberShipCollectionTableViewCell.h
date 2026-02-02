//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, UILabel, UIView, WCFinderDetailTimeStringConfig;

@interface WCFinderMemberShipCollectionTableViewCell : UITableViewCell
{
    MMWebImageView *_coverImgView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    WCFinderDetailTimeStringConfig *_timeStringConfig;
    UIView *_topSeparatorLine;
    UIView *_bottomSeparatorLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(retain, nonatomic) WCFinderDetailTimeStringConfig *timeStringConfig; // @synthesize timeStringConfig=_timeStringConfig;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void)updateWithCollectionInfo:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3;

@end

