//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, UIImage;

@interface ImageMessageViewModel
{
    struct CGSize m_thumbImageSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) struct CGSize thumbImageSize; // @synthesize thumbImageSize=m_thumbImageSize;
- (void)onThumbImageSave:(id)arg1;
- (id)accessibilityMessageType;
- (_Bool)contentExists;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (id)getImageIfDownFail;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) _Bool isImageExists;
- (id)maskedThumbImage;
@property(readonly, nonatomic) UIImage *thumbImage;
- (id)maskedThumbImagePath;
@property(readonly, nonatomic) unsigned int thumbDownloadStatus;
- (_Bool)shouldShowTailEntranceTail;
- (_Bool)shouldShowWeAppEntranceTail;
- (_Bool)shouldShowViewOriginalTail;
- (_Bool)isSupportSourceViewBottomClick;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (_Bool)shouldShowSourceViewInContent;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

