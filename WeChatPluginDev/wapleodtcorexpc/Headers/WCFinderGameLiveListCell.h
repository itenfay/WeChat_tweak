//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, MMWebImageView, UIImageView, UILabel, UIView;
@protocol WCFinderGameLiveListCellDelegate;

@interface WCFinderGameLiveListCell
{
    _Bool _isSelectGame;
    id <WCFinderGameLiveListCellDelegate> _delegate;
    UIView *_functionContentView;
    AttributeLabel *_gameName;
    UILabel *_miniGameLabel;
    MMWebImageView *_gameIconView;
    UIView *_separator;
    UIView *_checkIconView;
    UIImageView *_selectStateImg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectStateImg; // @synthesize selectStateImg=_selectStateImg;
@property(nonatomic) _Bool isSelectGame; // @synthesize isSelectGame=_isSelectGame;
@property(retain, nonatomic) UIView *checkIconView; // @synthesize checkIconView=_checkIconView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) MMWebImageView *gameIconView; // @synthesize gameIconView=_gameIconView;
@property(retain, nonatomic) UILabel *miniGameLabel; // @synthesize miniGameLabel=_miniGameLabel;
@property(retain, nonatomic) AttributeLabel *gameName; // @synthesize gameName=_gameName;
@property(retain, nonatomic) UIView *functionContentView; // @synthesize functionContentView=_functionContentView;
@property(nonatomic) __weak id <WCFinderGameLiveListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cleanLayer;
- (void)updateCellWithRectCorner:(unsigned long long)arg1;
- (void)updateWithGameInfo:(id)arg1 searchText:(id)arg2;
- (void)unToggle;
- (void)toggle;
- (void)removeSeparator;
- (void)drawSeparator;
- (void)updateWithGameInfo:(id)arg1 isSelect:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

