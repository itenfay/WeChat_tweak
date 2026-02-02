//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMHeadImageView, UIButton, UIImageView, UILabel, UIView;

@interface WXGRoamChooseRangeExactUserCell : UITableViewCell
{
    UIImageView *_selectedImage;
    UIButton *_rightButton;
    MMHeadImageView *_headIcon;
    UILabel *_titleLabel;
    UIView *_seperator;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMHeadImageView *headIcon; // @synthesize headIcon=_headIcon;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIImageView *selectedImage; // @synthesize selectedImage=_selectedImage;
- (void)onDetail;
- (void)initView;
- (void)setCellWidth:(double)arg1 type:(unsigned long long)arg2 selected:(_Bool)arg3 sessionName:(id)arg4 showSize:(_Bool)arg5 size:(unsigned long long)arg6;

@end

