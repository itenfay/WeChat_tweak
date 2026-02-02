//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectedMicCellExpandView : UITableViewCell
{
    _Bool _isExpand;
    CDUnknownBlockType _actionBlock;
    UIView *_container;
    UILabel *_titleLabel;
    UIImageView *_arrowIcon;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
- (void)updateWithTitle:(id)arg1 isExpand:(_Bool)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

