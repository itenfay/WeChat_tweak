//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, ResourceCountView, UIImageView, UILabel, UIView;
@protocol StorageResourceInfoCellDelegate;

@interface StorageResourceInfoCell : UITableViewCell
{
    shared_ptr_5102c92c m_curSessionItem;
    id <StorageResourceInfoCellDelegate> _delegate;
    UIImageView *_selectImageView;
    UIImageView *_resourceIcon;
    MMUIButton *_detailButton;
    UILabel *_sourceLabel;
    UILabel *_sizeLabel;
    UIView *_seperateLine;
    ResourceCountView *_resCountView;
    UIView *_bottomSeperateLine;
}

+ (double)cellHeight;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeperateLine; // @synthesize bottomSeperateLine=_bottomSeperateLine;
@property(retain, nonatomic) ResourceCountView *resCountView; // @synthesize resCountView=_resCountView;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) MMUIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UIImageView *resourceIcon; // @synthesize resourceIcon=_resourceIcon;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(nonatomic) __weak id <StorageResourceInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickArrowButton;
- (void)onClickDetailButton;
- (const void *)sessionItem;
- (void)updateWithSessionItem:(const void *)arg1 selected:(_Bool)arg2 selectType:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

