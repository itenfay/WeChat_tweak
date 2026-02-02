//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class FavAttributeCPLabel, UIImageView, UIView;

@interface WCFinderPOIRelatedListHalfTableViewCell : UITableViewCell
{
    FavAttributeCPLabel *_titleLabel;
    FavAttributeCPLabel *_detailLabel;
    UIView *_bottomLine;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) FavAttributeCPLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) FavAttributeCPLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateUIMargin;
- (void)updateUIWithPOIDetail:(id)arg1 isHiddenLine:(_Bool)arg2;
- (void)initSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

