//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, SightIconView, UIImageView, UILabel, UIView;

@interface WCFileBrowserToolBarCell : UITableViewCell
{
    UIView *m_contentView;
    CDUnknownBlockType _OnClickRemoveButton;
    id _fileInfo;
    UIImageView *_thumbImageView;
    SightIconView *_videoIconView;
    UILabel *_titleLabel;
    UILabel *_sizeLabel;
    MMUIButton *_removeButton;
}

+ (double)cellHeight;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SightIconView *videoIconView; // @synthesize videoIconView=_videoIconView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) id fileInfo; // @synthesize fileInfo=_fileInfo;
@property(copy, nonatomic) CDUnknownBlockType OnClickRemoveButton; // @synthesize OnClickRemoveButton=_OnClickRemoveButton;
- (void)onRemove;
- (void)layoutUI;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

