//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, NSString, UIImageView, UILabel, UIView;
@protocol StorageDeleteInfoCellDelegate;

@interface StorageDeleteInfoCell : UITableViewCell
{
    shared_ptr_5102c92c m_curSessionItem;
    id <StorageDeleteInfoCellDelegate> _delegate;
    NSString *_userName;
    UIImageView *_selectImageView;
    UIImageView *_resourceIcon;
    MMUIButton *_detailButton;
    UILabel *_sourceLabel;
    UILabel *_sizeLabel;
    UIView *_seperateLine;
    UILabel *_msgCountLabel;
    UIView *_bottomSeperateLine;
}

+ (double)cellHeight;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeperateLine; // @synthesize bottomSeperateLine=_bottomSeperateLine;
@property(retain, nonatomic) UILabel *msgCountLabel; // @synthesize msgCountLabel=_msgCountLabel;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) MMUIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UIImageView *resourceIcon; // @synthesize resourceIcon=_resourceIcon;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak id <StorageDeleteInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickShowDetail;
- (void)onClickResourceImage;
- (void)updateCellWithSessionItem:(const void *)arg1 sizeString:(id)arg2 selected:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (const void *)sessionItem;

@end

