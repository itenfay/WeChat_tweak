//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCImageMsgWrapper, NSString;

@interface GCImageCellModel
{
    _Bool _oriNaviHidden;
    int _icountPointProgress;
    GCImageMsgWrapper *_imgMsgWrapper;
}

- (void).cxx_destruct;
@property(nonatomic) int icountPointProgress; // @synthesize icountPointProgress=_icountPointProgress;
@property(nonatomic) _Bool oriNaviHidden; // @synthesize oriNaviHidden=_oriNaviHidden;
@property(retain, nonatomic) GCImageMsgWrapper *imgMsgWrapper; // @synthesize imgMsgWrapper=_imgMsgWrapper;
- (void)onImgFailedForReason:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)handleCdnProgress:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (id)bindImageCell;
- (void)imageCdnUploadStatusChange;
- (void)imageGenerateStatusChanged;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)startDownloadImg;
- (void)checkDownloadThumbImgIfFirstTime;
- (void)reDownloadImg;
- (_Bool)disableRightLoadingView;
- (_Bool)customHandleReSend;
- (_Bool)checkClientMsgIdMatch:(id)arg1;
- (void)onExitRoom;
- (Class)bindCellClass;
- (id)init;
- (id)initWithChatroomMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

