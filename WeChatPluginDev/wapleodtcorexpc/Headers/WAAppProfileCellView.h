//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSDate, UIView, WAAppProfileViewModel, WCTagsView;

@interface WAAppProfileCellView
{
    MMWebImageView *_iconView;
    UIView *_infoView;
    MMUILabel *_nameLabel;
    WCTagsView *_tagsView;
    MMUILabel *_scoreLabel;
    NSDate *_visibleDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *visibleDate; // @synthesize visibleDate=_visibleDate;
@property(retain, nonatomic) MMUILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) WCTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
- (void)onTouchUpInside;
- (void)initWeAppProfileView;
- (void)layoutContentView;
- (void)willMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WAAppProfileViewModel *viewModel; // @dynamic viewModel;

@end

