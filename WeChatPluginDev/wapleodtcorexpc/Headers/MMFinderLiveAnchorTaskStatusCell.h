//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderLiveQuestInstance, MMFinderLiveNewAnchorTaskViewModel, MMUIImageView, MMUILabel, MMUIView;

@interface MMFinderLiveAnchorTaskStatusCell : UICollectionViewCell
{
    _Bool _isSelected;
    CDUnknownBlockType _onClick;
    FinderLiveQuestInstance *_taskItem;
    MMFinderLiveNewAnchorTaskViewModel *_taskVM;
    long long _totalCnt;
    long long _index;
    MMUIImageView *_checkbox;
    MMUILabel *_status;
    MMUILabel *_date;
    MMUIView *_leftLine;
    MMUIView *_rightLine;
    MMUILabel *_actionLabel;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) MMUIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) MMUIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) MMUILabel *date; // @synthesize date=_date;
@property(retain, nonatomic) MMUILabel *status; // @synthesize status=_status;
@property(retain, nonatomic) MMUIImageView *checkbox; // @synthesize checkbox=_checkbox;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long totalCnt; // @synthesize totalCnt=_totalCnt;
@property(retain, nonatomic) MMFinderLiveNewAnchorTaskViewModel *taskVM; // @synthesize taskVM=_taskVM;
@property(retain, nonatomic) FinderLiveQuestInstance *taskItem; // @synthesize taskItem=_taskItem;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
- (void)onClickCell;
- (id)createShapeLayer;
- (void)layoutUI;
- (id)color;
- (void)layoutSubviews;
- (void)checkLine;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

