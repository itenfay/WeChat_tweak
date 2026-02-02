//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, UIView;

@interface MMFinderLiveKTVSongBoardCell : UICollectionViewCell
{
    _Bool _canShowtabIndicatorView;
    unsigned int _boardType;
    MMUILabel *_boardLabel;
    MMUILabel *_subBoardLabel;
    UIView *_tabIndicatorView;
}

+ (struct CGSize)cellSizeWithLabel:(id)arg1 boardType:(unsigned int)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool canShowtabIndicatorView; // @synthesize canShowtabIndicatorView=_canShowtabIndicatorView;
@property(retain, nonatomic) UIView *tabIndicatorView; // @synthesize tabIndicatorView=_tabIndicatorView;
@property(nonatomic) unsigned int boardType; // @synthesize boardType=_boardType;
@property(retain, nonatomic) MMUILabel *subBoardLabel; // @synthesize subBoardLabel=_subBoardLabel;
@property(retain, nonatomic) MMUILabel *boardLabel; // @synthesize boardLabel=_boardLabel;
- (void)updateWithBoardName:(id)arg1 boardType:(unsigned int)arg2 isChosen:(_Bool)arg3;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

