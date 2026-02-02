//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLivePromoteInfoRedPacketCover_PromoteRedPacketCoverInfo, MMUIButton, MMUILabel, MMWebImageView;

@interface MMFinderLiveHonCoverPromotePubbleContentView
{
    _Bool _received;
    _Bool _isAnchor;
    MMWebImageView *_titleImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_anchorLabel;
    MMUIButton *_actionButton;
    FinderLivePromoteInfoRedPacketCover_PromoteRedPacketCoverInfo *_model;
}

+ (id)getCacheInfoWithList:(id)arg1 model:(id)arg2 liveTask:(id)arg3;
+ (id)getNewCoverInfoWithBuffer:(id)arg1;
+ (_Bool)isCanShowHonCover:(id)arg1 liveTask:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) _Bool received; // @synthesize received=_received;
@property(retain, nonatomic) FinderLivePromoteInfoRedPacketCover_PromoteRedPacketCoverInfo *model; // @synthesize model=_model;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *anchorLabel; // @synthesize anchorLabel=_anchorLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)updateActionButton:(_Bool)arg1 full:(unsigned int)arg2;
- (void)updateRespList:(id)arg1;
- (void)closeWebviewClick;
- (void)handleSingleTapGesture:(id)arg1;
- (void)addGestures;
- (void)onTapAction;
- (void)actionButtonClick:(id)arg1;
- (void)updateLabelsOriginY;
- (void)layoutAnchorLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleImgView;
- (void)cacheLiveHonCoverInfo:(id)arg1;
- (id)getCacheLiveHonCoverList;
- (void)layoutActionBtn;
- (void)layoutUI;
- (void)onShowed;
- (id)getCurrentPromoteBuffer;
- (id)getRedPacketWithModel:(id)arg1;
- (id)getCoverInfoWithBuffer:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (id)accessibilityValueString;
- (id)accessibilityLabelString;
- (_Bool)shouldBeAccessibilityElement;
- (void)refreshData;
- (void)convertPromoteMsgInfo:(id)arg1;

@end

