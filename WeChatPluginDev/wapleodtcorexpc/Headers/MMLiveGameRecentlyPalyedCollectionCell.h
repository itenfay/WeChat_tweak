//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveGameSearchUserInfo, MMWebImageView, NSString, UILabel;

@interface MMLiveGameRecentlyPalyedCollectionCell : UICollectionViewCell
{
    _Bool _isMiniGame;
    MMWebImageView *_gameIconView;
    UILabel *_gameLabel;
    UILabel *_miniGameLabel;
    MMFinderLiveGameSearchUserInfo *_dataItem;
    NSString *_gameLabelText;
    NSString *_gameIconUrl;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMiniGame; // @synthesize isMiniGame=_isMiniGame;
@property(retain, nonatomic) NSString *gameIconUrl; // @synthesize gameIconUrl=_gameIconUrl;
@property(retain, nonatomic) NSString *gameLabelText; // @synthesize gameLabelText=_gameLabelText;
@property(retain, nonatomic) MMFinderLiveGameSearchUserInfo *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) UILabel *miniGameLabel; // @synthesize miniGameLabel=_miniGameLabel;
@property(retain, nonatomic) UILabel *gameLabel; // @synthesize gameLabel=_gameLabel;
@property(retain, nonatomic) MMWebImageView *gameIconView; // @synthesize gameIconView=_gameIconView;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

