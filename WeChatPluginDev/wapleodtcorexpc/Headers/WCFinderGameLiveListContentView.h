//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AttributeLabel, MMFinderLiveGameUserInfo, MMWebImageView, UIImageView, UILabel;

@interface WCFinderGameLiveListContentView : UIView
{
    _Bool _isSelectGame;
    UIView *_functionContentView;
    AttributeLabel *_gameName;
    UILabel *_miniGameLabel;
    MMWebImageView *_gameIconView;
    UIView *_separator;
    UIView *_checkIconView;
    UIImageView *_selectStateImg;
    MMFinderLiveGameUserInfo *_gameUserInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo; // @synthesize gameUserInfo=_gameUserInfo;
@property(retain, nonatomic) UIImageView *selectStateImg; // @synthesize selectStateImg=_selectStateImg;
@property(nonatomic) _Bool isSelectGame; // @synthesize isSelectGame=_isSelectGame;
@property(retain, nonatomic) UIView *checkIconView; // @synthesize checkIconView=_checkIconView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) MMWebImageView *gameIconView; // @synthesize gameIconView=_gameIconView;
@property(retain, nonatomic) UILabel *miniGameLabel; // @synthesize miniGameLabel=_miniGameLabel;
@property(retain, nonatomic) AttributeLabel *gameName; // @synthesize gameName=_gameName;
@property(retain, nonatomic) UIView *functionContentView; // @synthesize functionContentView=_functionContentView;
- (void)cleanLayer;
- (void)updateCellWithRectCorner:(unsigned long long)arg1;
- (void)updateWithGameInfo:(id)arg1 searchText:(id)arg2;
- (void)unToggle;
- (void)toggle;
- (void)removeSeparator;
- (void)drawSeparator;
- (void)updateWithGameInfo:(id)arg1 isSelect:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

