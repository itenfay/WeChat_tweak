//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLivelotteryClaimInfo, MMUILabel;

@interface MMFinderLiveLotteryGetPrizeItemView : UIView
{
    FinderLivelotteryClaimInfo *_claimInfo;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FinderLivelotteryClaimInfo *claimInfo; // @synthesize claimInfo=_claimInfo;
- (void)layoutDetailLabel;
- (void)layoutTitleLabel;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

