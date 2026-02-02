//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage;

@interface VideoMessageViewModel
{
    NSString *m_videoPath;
    struct CGSize m_thumbImageSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize thumbImageSize; // @synthesize thumbImageSize=m_thumbImageSize;
@property(readonly, nonatomic) NSString *videoPath; // @synthesize videoPath=m_videoPath;
- (_Bool)contentExists;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
- (void)onMessageDownloadVideoFail;
- (void)onMessageDownloadVideoExpired;
- (void)onMessageDownloadThumbImageOK;
- (_Bool)canForwardAndFavorites;
@property(readonly, nonatomic) _Bool canPlayVideo;
@property(readonly, nonatomic) UIImage *thumbImage;
@property(readonly, nonatomic) NSString *videoTime;
@property(readonly, nonatomic) NSString *videoSize;
- (id)accessibilityValue;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (_Bool)shouldShowWeAppEntranceTail;
- (_Bool)isSupportSourceViewBottomClick;
- (_Bool)isShowSourceView;
- (_Bool)shouldShowSourceViewInContent;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

