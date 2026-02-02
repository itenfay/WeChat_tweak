//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveConnectMicUser, MMFinderLiveTask, MMLiveIconButton, MMUIActivityIndicatorView, UILabel, UIView;
@protocol MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectedMicUserCellView : UITableViewCell
{
    id <MMFinderLiveConnectedMicUserCellViewDelegate> _actionDelegate;
    MMFinderLiveConnectMicUser *_connectMicUser;
    UIView *_containerView;
    UIView *_bottomSeparatorLine;
    UILabel *_nickNameLabel;
    MMLiveIconButton *_rightButton;
    MMUIActivityIndicatorView *_activityIndicatorView;
    UILabel *_subTitleLabel;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMLiveIconButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUser; // @synthesize connectMicUser=_connectMicUser;
@property(nonatomic) __weak id <MMFinderLiveConnectedMicUserCellViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onTapRightButton;
- (void)configBottomSeparatorLine;
- (void)configSubTitleLabel;
- (void)configNickNameLabel;
- (void)configRightButton;
- (void)configActivityIndicatorView;
- (void)configContainerView;
- (void)prepareForReuse;

@end

