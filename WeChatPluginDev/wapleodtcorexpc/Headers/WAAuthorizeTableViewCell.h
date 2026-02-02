//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString, UIImageView, WAAuthorizeTableViewCellInfo;

@interface WAAuthorizeTableViewCell
{
    WAAuthorizeTableViewCellInfo *_viewDataModel;
    MMWebImageView *_iconView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    UIImageView *_selectImageView;
}

+ (double)viewHeight;
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WAAuthorizeTableViewCellInfo *viewDataModel; // @synthesize viewDataModel=_viewDataModel;
- (id)accessibilityLabel;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

