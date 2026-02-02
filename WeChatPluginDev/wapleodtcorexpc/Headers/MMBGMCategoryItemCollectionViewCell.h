//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMBGMCategoryItem, MMBGMPanelPublishContext, MMBGMSelectedConfig, UILabel;

@interface MMBGMCategoryItemCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    MMBGMCategoryItem *_item;
    MMBGMPanelPublishContext *_publishContext;
    MMBGMSelectedConfig *_panelConfig;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBGMSelectedConfig *panelConfig; // @synthesize panelConfig=_panelConfig;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(retain, nonatomic) MMBGMCategoryItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithItem:(id)arg1;
- (id)genReportDict;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

