//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderMemberZonePromoteInfo, MMUIButton, MMUILabel, MMWebImageView;

@interface MMFinderLiveBloggerMemberPromotePubbleContentView
{
    MMWebImageView *_titleImgView;
    MMUILabel *_companyLabel;
    MMUILabel *_descLabel;
    MMUIButton *_actionButton;
    FinderMemberZonePromoteInfo *_memberZonePromoteInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderMemberZonePromoteInfo *memberZonePromoteInfo; // @synthesize memberZonePromoteInfo=_memberZonePromoteInfo;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *companyLabel; // @synthesize companyLabel=_companyLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (id)onPromoteBubbleActionExtraInfo;
- (void)onClosed;
- (void)onShowed;
- (double)rightWidgetLeft;
- (void)gotoMemberZone;
- (void)onHandleAction;
- (void)updateLabelsOriginY;
- (void)layoutDescLabel;
- (void)layoutCompanyLabel;
- (void)layoutTitleImgView;
- (void)layoutActionButton;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (void)refreshData;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;

@end

