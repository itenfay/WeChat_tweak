//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, UIImageView, UILabel;

@interface WASettingAccountCell
{
    MMWebImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UIImageView *_statusView;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *avatarView; // @synthesize avatarView=_avatarView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

