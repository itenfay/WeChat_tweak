//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface WXGRoamSelectDeviceCell : UITableViewCell
{
    _Bool _isSelected;
    _Bool _isPortable;
    _Bool _isAddCell;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIView *_blockView;
    double _cellHeight;
    NSString *_iconName;
    NSString *_title;
    UILabel *_portablePathLabel;
    UIButton *_removeBtn;
    CDUnknownBlockType _reloadBlock;
    NSString *_portablePath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *portablePath; // @synthesize portablePath=_portablePath;
@property(copy, nonatomic) CDUnknownBlockType reloadBlock; // @synthesize reloadBlock=_reloadBlock;
@property(retain, nonatomic) UIButton *removeBtn; // @synthesize removeBtn=_removeBtn;
@property(retain, nonatomic) UILabel *portablePathLabel; // @synthesize portablePathLabel=_portablePathLabel;
@property(nonatomic) _Bool isAddCell; // @synthesize isAddCell=_isAddCell;
@property(nonatomic) _Bool isPortable; // @synthesize isPortable=_isPortable;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIView *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)onDeletePortablePath;
- (void)setupViews;

@end

