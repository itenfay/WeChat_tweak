//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSString, UIImageView, UIView;

@interface MMAlbumDropPickerCell : UITableViewCell
{
    _Bool _isSelected;
    UIView *_bgContentView;
    UIImageView *_headImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_countLabel;
    UIImageView *_selectedImageView;
    UIView *_separatorView;
    NSString *_albumId;
}

+ (double)height;
+ (id)cellInTableView:(id)arg1 album:(id)arg2 name:(id)arg3 isSelected:(_Bool)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *bgContentView; // @synthesize bgContentView=_bgContentView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void)layout;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)updateWithPhotoCount:(long long)arg1;
- (void)updateWithImage:(id)arg1;
- (void)updateWithImage:(id)arg1 title:(id)arg2 count:(long long)arg3 isSelected:(_Bool)arg4;

@end

