//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCDataItem, WCImageView, WCMediaItem, WCPlayerConfigViewController;

@interface WCContentItemViewTemplateHotVideo
{
    WCDataItem *m_oDataItem;
    WCMediaItem *m_oMediaItem;
    WCImageView *m_oWCCoverImage;
    WCPlayerConfigViewController *_videoPlayerVC;
    unsigned long long _legalityType;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long legalityType; // @synthesize legalityType=_legalityType;
@property(retain, nonatomic) WCPlayerConfigViewController *videoPlayerVC; // @synthesize videoPlayerVC=_videoPlayerVC;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTapAttachButton:(id)arg1;
- (void)onCloseFullScreenPlayComplete:(id)arg1;
- (void)onCloseFullScreenPlay:(id)arg1;
- (void)onForwardSuccess:(id)arg1;
- (void)onForwardCancle:(id)arg1;
- (id)generateFavWithMediaWrap:(id)arg1;
- (id)generateMsgWithMediaWrap:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)OnDownloadSuccessForFavoriteAdd;
- (id)getImage;
- (id)getPlayerInfoWith:(_Bool)arg1;
- (void)playHotVideo;
- (void)onLongPressedWCImage:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)onLongTouch;
- (void)throwUrlMessage;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

