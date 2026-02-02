//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveProgrammeAnchorPromoteInfo, MMUILabel, UIImageView, UIView;

@interface MMFinderLiveProgrammeAnchorPromoteTableViewCell
{
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_startTimeLabel;
    UIView *_splitView;
    MMUILabel *_detailLabel;
    MMFinderLiveProgrammeAnchorPromoteInfo *_programmaPromoteInfo;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveProgrammeAnchorPromoteInfo *programmaPromoteInfo; // @synthesize programmaPromoteInfo=_programmaPromoteInfo;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) MMUILabel *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)updateLabelsOriginY;
- (void)layoutDetailLabel;
- (void)layoutSplitView;
- (void)layoutStartTimeLabel;
- (void)layoutTitleLabel;
- (void)layoutIconImgView;
- (_Bool)enableMenuAction;
- (id)promoteInfo;
- (void)updatePromoteInfo:(id)arg1;
- (void)layoutUI;

@end

