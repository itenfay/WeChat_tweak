//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMListenSimplePlayableInfo, UIImage, UIImageView, UILabel, UIView;

@interface RingBackAddToTingCell : UITableViewCell
{
    _Bool _isSelected;
    UIImageView *_selectedImageView;
    UIImageView *_webCoverView;
    UILabel *_songLable;
    UILabel *_singerLable;
    UILabel *_timeLable;
    UIView *_lineView;
    UIImage *_defaultImage;
    MMListenSimplePlayableInfo *_info;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMListenSimplePlayableInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *timeLable; // @synthesize timeLable=_timeLable;
@property(retain, nonatomic) UILabel *singerLable; // @synthesize singerLable=_singerLable;
@property(retain, nonatomic) UILabel *songLable; // @synthesize songLable=_songLable;
@property(retain, nonatomic) UIImageView *webCoverView; // @synthesize webCoverView=_webCoverView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
- (void)layoutSubviews;
- (void)initSubView;
- (void)updateSelectedStatus:(_Bool)arg1;
- (void)updateContent:(id)arg1 isSelected:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

