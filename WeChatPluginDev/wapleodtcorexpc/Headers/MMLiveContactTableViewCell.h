//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, MMLiveUserStateItem, MMUIImageView, MMUILabel;
@protocol MMLiveContactTableViewCellDelegate;

@interface MMLiveContactTableViewCell
{
    id <MMLiveContactTableViewCellDelegate> _cellDelegate;
    double _seperatorStartX;
    MMHeadImageView *_headImageView;
    MMUILabel *_displayNameLabel;
    MMUIImageView *_arrowImageView;
    MMLiveUserStateItem *_userItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveUserStateItem *userItem; // @synthesize userItem=_userItem;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) double seperatorStartX; // @synthesize seperatorStartX=_seperatorStartX;
@property(nonatomic) __weak id <MMLiveContactTableViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)onHeadImageClicked:(id)arg1;
- (void)updateWithUserItem:(id)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

