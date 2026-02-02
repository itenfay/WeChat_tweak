//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GameNoticeAdditionalInfo, MMUIButton, MMWebImageView, UILabel;
@protocol GameNoticeAdditionalInfoViewDelegate;

@interface GameNoticeAdditionalInfoView : UIView
{
    GameNoticeAdditionalInfo *_additionalInfo;
    MMWebImageView *_infoIcon;
    UILabel *_headLabel;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    MMUIButton *_additionalButton;
    UIView *_tapView;
    id <GameNoticeAdditionalInfoViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GameNoticeAdditionalInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *tapView; // @synthesize tapView=_tapView;
@property(retain, nonatomic) MMUIButton *additionalButton; // @synthesize additionalButton=_additionalButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(retain, nonatomic) MMWebImageView *infoIcon; // @synthesize infoIcon=_infoIcon;
@property(retain, nonatomic) GameNoticeAdditionalInfo *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
- (void)clickJumpButton;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

