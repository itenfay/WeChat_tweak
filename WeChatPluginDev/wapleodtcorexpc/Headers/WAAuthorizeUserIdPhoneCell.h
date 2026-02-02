//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;

@interface WAAuthorizeUserIdPhoneCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_markView;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setWXPhone:(_Bool)arg1;
- (void)setMark:(_Bool)arg1;
- (void)setupUI;
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

