//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class GetProfileInfoResponse_RelievedBuyInfo, NSString, UIButton, UILabel, WAProfileEasyBuyIconView;

@interface WAProfileEasyBuyCell : UITableViewCell
{
    GetProfileInfoResponse_RelievedBuyInfo *_infoModel;
    CDUnknownBlockType _viewEventAction;
    WAProfileEasyBuyIconView *_iconView;
    UIButton *_cardView;
    UILabel *_titleLabel;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) WAProfileEasyBuyIconView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType viewEventAction; // @synthesize viewEventAction=_viewEventAction;
@property(retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *infoModel; // @synthesize infoModel=_infoModel;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

