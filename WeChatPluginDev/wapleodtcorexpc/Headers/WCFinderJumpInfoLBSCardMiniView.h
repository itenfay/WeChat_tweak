//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, MMUIButton, UIImageView, UILabel, WCFinderJumpInfo;
@protocol WCFinderJumpInfoLBSCardViewDelegate;

@interface WCFinderJumpInfoLBSCardMiniView : UIView
{
    int _showPosition;
    id <WCFinderJumpInfoLBSCardViewDelegate> _delegate;
    FinderJumpInfo_Style *_style;
    UIImageView *_iconView;
    UILabel *_poiTitle;
    UILabel *_poiWording;
    MMUIButton *_favButton;
    WCFinderJumpInfo *_jumpInfo;
    double _layoutWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) MMUIButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) UILabel *poiWording; // @synthesize poiWording=_poiWording;
@property(retain, nonatomic) UILabel *poiTitle; // @synthesize poiTitle=_poiTitle;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(nonatomic) __weak id <WCFinderJumpInfoLBSCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCardClicked:(id)arg1;
- (void)onFavBtnClicked:(id)arg1;
- (void)updateWithStyle:(id)arg1;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)layoutSubviews;
- (void)updateUI;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

