//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class RichTextView, UIImageView;
@protocol WCFinderOpenFinderEntryTableViewCellDelegate;

@interface WCFinderOpenFinderEntryTableViewCell : UITableViewCell
{
    id <WCFinderOpenFinderEntryTableViewCellDelegate> _delegate;
    unsigned long long _cardIndex;
    UIImageView *_finderIconImageView;
    RichTextView *_tipsTextView;
    UIImageView *_arrowImageView;
}

+ (double)openFinderEntryCellHeightWithTips:(id)arg1 screenWid:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) RichTextView *tipsTextView; // @synthesize tipsTextView=_tipsTextView;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(nonatomic) unsigned long long cardIndex; // @synthesize cardIndex=_cardIndex;
@property(nonatomic) __weak id <WCFinderOpenFinderEntryTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickContentAction;
- (void)switchToDarkMode:(_Bool)arg1;
- (void)updateOpenFinderEntryCellWithTips:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

