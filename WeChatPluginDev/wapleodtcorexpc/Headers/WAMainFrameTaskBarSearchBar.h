//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface WAMainFrameTaskBarSearchBar : UIView
{
    NSString *_placeHolder;
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_searchBarImageView;
    UILabel *_searchHintLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *searchHintLabel; // @synthesize searchHintLabel=_searchHintLabel;
@property(retain, nonatomic) UIImageView *searchBarImageView; // @synthesize searchBarImageView=_searchBarImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
- (void)onSearchPlaceHolderUpdate:(id)arg1;
- (void)refreshSearchPlaceHolder:(id)arg1;
- (void)setSearchMagicAnimeId:(id)arg1;
- (void)setSearchBarBackgroundColor:(id)arg1;
- (void)setHintColor:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end

