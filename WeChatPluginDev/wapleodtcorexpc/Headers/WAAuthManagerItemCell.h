//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, UIButton, UILabel, WAAuthManagerItemViewModel;

@interface WAAuthManagerItemCell
{
    WAAuthManagerItemViewModel *_viewDataModel;
    MMWebImageView *_iconView;
    UIButton *_deleteButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_hasDeleteLabel;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *hasDeleteLabel; // @synthesize hasDeleteLabel=_hasDeleteLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WAAuthManagerItemViewModel *viewDataModel; // @synthesize viewDataModel=_viewDataModel;
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

