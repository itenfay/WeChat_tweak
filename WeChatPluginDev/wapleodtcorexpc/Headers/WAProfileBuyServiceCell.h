//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class GetProfileInfoResponse_RelievedBuyInfo, UIImageView, UILabel;

@interface WAProfileBuyServiceCell : UITableViewCell
{
    GetProfileInfoResponse_RelievedBuyInfo *_infoModel;
    UILabel *_titleLabel;
    UIImageView *_arrowView;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *infoModel; // @synthesize infoModel=_infoModel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewDataModel:(id)arg1;

@end

