//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class FavAttributeCPLabel, UIImageView, UIView;

@interface WCFinderProfilePOISearchTableViewCell : UITableViewCell
{
    FavAttributeCPLabel *_nameLabel;
    FavAttributeCPLabel *_addrLabel;
    UIImageView *_arrowView;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) FavAttributeCPLabel *addrLabel; // @synthesize addrLabel=_addrLabel;
@property(retain, nonatomic) FavAttributeCPLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (id)distanceByPOIInfo:(id)arg1;
- (void)configWithPOIInfo:(id)arg1 hideLine:(_Bool)arg2;
- (void)updateMargin;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

