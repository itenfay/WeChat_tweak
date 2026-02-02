//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface WXGRoamChooseRangeViewCell : UITableViewCell
{
    _Bool _isShowExtra;
    UIView *_cardView;
    UILabel *_topLabel;
    UIView *_rangeView;
    UIImageView *_rangeArrow;
    UILabel *_rangeTextLabel;
    UIView *_excludeView;
    UIView *_timeFilterView;
    UILabel *_excludeTitle;
    UILabel *_excludeLabel;
    UIImageView *_excludeArror;
    UILabel *_timeFilterLabel;
    CDUnknownBlockType _reloadBlock;
    UIView *_selectExtraView;
    UIImageView *_selectExtraArrow;
    double _cellHeight;
    double _cellWidth;
    unsigned long long _cellIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool isShowExtra; // @synthesize isShowExtra=_isShowExtra;
@property(retain, nonatomic) UIImageView *selectExtraArrow; // @synthesize selectExtraArrow=_selectExtraArrow;
@property(retain, nonatomic) UIView *selectExtraView; // @synthesize selectExtraView=_selectExtraView;
@property(copy, nonatomic) CDUnknownBlockType reloadBlock; // @synthesize reloadBlock=_reloadBlock;
@property(retain, nonatomic) UILabel *timeFilterLabel; // @synthesize timeFilterLabel=_timeFilterLabel;
@property(retain, nonatomic) UIImageView *excludeArror; // @synthesize excludeArror=_excludeArror;
@property(retain, nonatomic) UILabel *excludeLabel; // @synthesize excludeLabel=_excludeLabel;
@property(retain, nonatomic) UILabel *excludeTitle; // @synthesize excludeTitle=_excludeTitle;
@property(retain, nonatomic) UIView *timeFilterView; // @synthesize timeFilterView=_timeFilterView;
@property(retain, nonatomic) UIView *excludeView; // @synthesize excludeView=_excludeView;
@property(retain, nonatomic) UILabel *rangeTextLabel; // @synthesize rangeTextLabel=_rangeTextLabel;
@property(retain, nonatomic) UIImageView *rangeArrow; // @synthesize rangeArrow=_rangeArrow;
@property(retain, nonatomic) UIView *rangeView; // @synthesize rangeView=_rangeView;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
- (void)onDeleteCell;
- (void)updateRangeView;
- (void)updateTimeView;
- (void)updateExcludeView;
- (void)updateIsShowExtra;
- (void)setupViews;
- (void)setWidth:(double)arg1;

@end

