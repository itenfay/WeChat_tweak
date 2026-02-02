//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, MMWebImageView, NSString, WCAdFinderTopicResInfo;

@interface WCAdSliderCardFinderTopicCellView
{
    MMWebImageView *_avatarView;
    MMUILabel *_nicknameView;
    MMUILabel *_durationView;
    MMUIView *_infoBarView;
    MMUIView *_infoDividerView;
    MMUILabel *_tagView;
    MMUILabel *_descView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) MMUILabel *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) MMUIView *infoDividerView; // @synthesize infoDividerView=_infoDividerView;
@property(retain, nonatomic) MMUIView *infoBarView; // @synthesize infoBarView=_infoBarView;
@property(retain, nonatomic) MMUILabel *durationView; // @synthesize durationView=_durationView;
@property(retain, nonatomic) MMUILabel *nicknameView; // @synthesize nicknameView=_nicknameView;
@property(retain, nonatomic) MMWebImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
@property(readonly, nonatomic) WCAdFinderTopicResInfo *finderTopicResInfo;
- (_Bool)shouldDownloadImageUseCDN;
- (id)fetchReportItem;
- (void)adjustLayout;
- (void)updateContentUI;
- (void)initInfoView;
- (void)initHeadView;
- (void)initDetailView;
- (id)createContentContainer;
- (id)getCellContentViewMaskPath:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

