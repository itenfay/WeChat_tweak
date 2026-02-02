//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel, UIView, WCFinderDetailTimeStringConfig;

@interface WCFinderProfileOverviewCollectionCell : UICollectionViewCell
{
    _Bool _showSeparatorLine;
    UIImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    NSString *_coverUrl;
    WCFinderDetailTimeStringConfig *_timeStringConfig;
    UIView *_separatorLine;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) _Bool showSeparatorLine; // @synthesize showSeparatorLine=_showSeparatorLine;
@property(retain, nonatomic) WCFinderDetailTimeStringConfig *timeStringConfig; // @synthesize timeStringConfig=_timeStringConfig;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

