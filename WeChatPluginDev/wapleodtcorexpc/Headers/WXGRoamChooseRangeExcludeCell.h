//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface WXGRoamChooseRangeExcludeCell : UITableViewCell
{
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIImageView *_headIcon;
    UILabel *_titleLabel;
    UIView *_seperator;
    long long _cellRangeIndex;
    unsigned long long _cellType;
    CDUnknownBlockType _reloadBlock;
}

+ (double)cellHeightUsers;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reloadBlock; // @synthesize reloadBlock=_reloadBlock;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) long long cellRangeIndex; // @synthesize cellRangeIndex=_cellRangeIndex;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headIcon; // @synthesize headIcon=_headIcon;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (void)onDetail;
- (void)deleteCell;
- (void)setCellWidth:(double)arg1 type:(unsigned long long)arg2 cellRangeIndex:(long long)arg3;

@end

