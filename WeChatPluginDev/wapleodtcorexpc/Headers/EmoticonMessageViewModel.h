//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EmoticonMessageViewModel
{
    _Bool _isSelfieEmoticon;
    unsigned long long _msgDownloadStatus;
    struct CGSize _noImageSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) _Bool isSelfieEmoticon; // @synthesize isSelfieEmoticon=_isSelfieEmoticon;
@property(nonatomic) unsigned long long msgDownloadStatus; // @synthesize msgDownloadStatus=_msgDownloadStatus;
@property(nonatomic) struct CGSize noImageSize; // @synthesize noImageSize=_noImageSize;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (void)OnEmoticonDownload:(unsigned int)arg1 withMsgWrap:(id)arg2;
- (_Bool)shouldShowSourceViewInContent;
- (_Bool)isShowSourceView;
- (_Bool)isTailPart;
- (id)sourceTitle;
- (id)sourceIcon;
@property(readonly, nonatomic) _Bool isShowRewardTipsView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

@end

