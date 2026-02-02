//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMBrandHeadImageView, MMUIImageView, UILabel, UIView;

@interface BrandProfileRecoomendFollowCollectionCell : UICollectionViewCell
{
    MMBrandHeadImageView *_avatarView;
    UIView *_nickNameContentView;
    UILabel *_nickNameLabel;
    UILabel *_descLabel;
    MMUIImageView *_certTagView;
    UIView *_highlightedView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) MMUIImageView *certTagView; // @synthesize certTagView=_certTagView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *nickNameContentView; // @synthesize nickNameContentView=_nickNameContentView;
@property(retain, nonatomic) MMBrandHeadImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)updateWithItem:(id)arg1;

@end

