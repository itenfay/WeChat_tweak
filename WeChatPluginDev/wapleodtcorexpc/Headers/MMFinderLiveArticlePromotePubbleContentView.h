//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLivePromoteInfoListMpArticleInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveArticlePromotePubbleContentView
{
    MMWebImageView *_titleImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_anchorLabel;
    FinderLivePromoteInfoListMpArticleInfo *_articleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLivePromoteInfoListMpArticleInfo *articleInfo; // @synthesize articleInfo=_articleInfo;
@property(retain, nonatomic) MMUILabel *anchorLabel; // @synthesize anchorLabel=_anchorLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)updateLabelsOriginY;
- (void)layoutAnchorLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleImgView;
- (void)layoutUI;
- (void)onClosed;
- (void)onShowed;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)onTapAction;
- (void)handleSingleTapGesture:(id)arg1;
- (void)refreshData;
- (void)convertPromoteMsgInfo:(id)arg1;

@end

