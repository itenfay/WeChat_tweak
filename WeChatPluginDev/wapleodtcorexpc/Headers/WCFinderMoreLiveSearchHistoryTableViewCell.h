//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class FavAttributeCPLabel, UIImageView, UIView, WCFinderSearchSuggestion;
@protocol WCFinderMoreLiveSearchHistoryTableViewCellDelegate;

@interface WCFinderMoreLiveSearchHistoryTableViewCell : UITableViewCell
{
    id <WCFinderMoreLiveSearchHistoryTableViewCellDelegate> _delegate;
    FavAttributeCPLabel *_tipsLabel;
    WCFinderSearchSuggestion *_record;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) WCFinderSearchSuggestion *record; // @synthesize record=_record;
@property(retain, nonatomic) FavAttributeCPLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak id <WCFinderMoreLiveSearchHistoryTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWithSearchRecord:(id)arg1;
- (void)prepareForReuse;
- (void)rightImageTapAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

