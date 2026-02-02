//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UIButton, UIImageView, UILabel;
@protocol MMMusicLiveMVAuthorInfoViewDelegate;

@interface MMMusicLiveMVAuthorInfoView : UIView
{
    UILabel *_nickNameLabel;
    MMWebImageView *_headImageView;
    UIButton *_switchBtn;
    id <MMMusicLiveMVAuthorInfoViewDelegate> _delegate;
    UILabel *_finderHintLabel;
    UILabel *_finderHintPreLabel;
    UILabel *_finderHintPostLabel;
    UIView *_headImageViewLayer;
    UIImageView *_switchLogoImageView;
    UILabel *_switchLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *switchLabel; // @synthesize switchLabel=_switchLabel;
@property(retain, nonatomic) UIImageView *switchLogoImageView; // @synthesize switchLogoImageView=_switchLogoImageView;
@property(retain, nonatomic) UIView *headImageViewLayer; // @synthesize headImageViewLayer=_headImageViewLayer;
@property(retain, nonatomic) UILabel *finderHintPostLabel; // @synthesize finderHintPostLabel=_finderHintPostLabel;
@property(retain, nonatomic) UILabel *finderHintPreLabel; // @synthesize finderHintPreLabel=_finderHintPreLabel;
@property(retain, nonatomic) UILabel *finderHintLabel; // @synthesize finderHintLabel=_finderHintLabel;
@property __weak id <MMMusicLiveMVAuthorInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *switchBtn; // @synthesize switchBtn=_switchBtn;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void)onClickSwitchBtn;
- (void)handleTapFinderHitLabel;
- (void)handleImageTap;
- (void)handleNicknameTap;
- (void)setSwitchBtnHidden:(_Bool)arg1;
- (void)updateDescStr:(id)arg1;
- (void)updateNickName:(id)arg1 avatarUrl:(id)arg2;
- (void)layoutSubviews;
- (id)init;

@end

