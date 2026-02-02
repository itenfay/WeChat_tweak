//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLivePromoteInfoListWecomContact, MMUIButton, MMUILabel, MMWebImageView;

@interface MMFinderLiveWeComContactPromotePubbleContentView
{
    MMWebImageView *_titleImgView;
    MMUILabel *_companyLabel;
    MMUILabel *_descLabel;
    MMUIButton *_actionButton;
    FinderLivePromoteInfoListWecomContact *_wecomContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLivePromoteInfoListWecomContact *wecomContact; // @synthesize wecomContact=_wecomContact;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *companyLabel; // @synthesize companyLabel=_companyLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (double)rightWidgetLeft;
- (void)gotoWeComContactProfile;
- (void)onHandleAction;
- (void)updateLabelsOriginY;
- (void)layoutDescLabel;
- (void)layoutCompanyLabel;
- (void)layoutTitleImgView;
- (void)layoutActionButton;
- (void)onClosed;
- (void)onShowed;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (void)refreshData;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;
- (id)accessibilityLabelString;
- (_Bool)shouldBeAccessibilityElement;

@end

