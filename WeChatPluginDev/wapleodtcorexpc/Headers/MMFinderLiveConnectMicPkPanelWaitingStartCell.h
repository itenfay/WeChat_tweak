//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveConnectMicPKInfo, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelWaitingStartCell : UITableViewCell
{
    id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
    UIView *_containerView;
    UIImageView *_waitingImageView;
    UILabel *_waitingLabel;
    UIButton *_cancelBtn;
    UIButton *_acceptBtn;
    UIButton *_quitMicBtn;
    MMFinderLiveConnectMicPKInfo *_pkInfo;
}

+ (id)ReuseIdentifier;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo; // @synthesize pkInfo=_pkInfo;
@property(retain, nonatomic) UIButton *quitMicBtn; // @synthesize quitMicBtn=_quitMicBtn;
@property(retain, nonatomic) UIButton *acceptBtn; // @synthesize acceptBtn=_acceptBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *waitingLabel; // @synthesize waitingLabel=_waitingLabel;
@property(retain, nonatomic) UIImageView *waitingImageView; // @synthesize waitingImageView=_waitingImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate; // @synthesize cellDelegate;
- (void)prepareForReuse;
- (void)updatePkInfo:(id)arg1;
- (void)onCloseMic;
- (void)onAcceptPk;
- (void)onCancelPk;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

