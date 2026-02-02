//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMHeadImageView, MMLiveApplyConnectMicAudience, MMLiveDotLoadingView, MMUIButton, UILabel, UIView;
@protocol MMLiveConnectedMicAudienceCellViewDelegate;

@interface MMLiveConnectedMicAudienceCellView : UITableViewCell
{
    _Bool _isDisabled;
    MMLiveApplyConnectMicAudience *_audienceInfo;
    MMHeadImageView *_avatarView;
    UILabel *_nickNameLabel;
    MMUIButton *_rightButton;
    UIView *_bottomSeparatorLine;
    MMLiveDotLoadingView *_dotLoadingView;
    unsigned long long _audienceCellState;
    id <MMLiveConnectedMicAudienceCellViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveConnectedMicAudienceCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) unsigned long long audienceCellState; // @synthesize audienceCellState=_audienceCellState;
@property(retain, nonatomic) MMLiveDotLoadingView *dotLoadingView; // @synthesize dotLoadingView=_dotLoadingView;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) MMUIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) MMLiveApplyConnectMicAudience *audienceInfo; // @synthesize audienceInfo=_audienceInfo;
- (void)onTapRightButton;
- (void)hideDotLoading;
- (void)showDotLoading;
- (void)layoutSubviews;
- (void)updateViewsFrame;
- (void)updateViews;
- (void)prepareForReuse;

@end

