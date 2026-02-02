//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TingItem, TingShareListenItem;

@interface AppTingMessageViewModel
{
    double _titleHeight;
    double _detailHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) double detailHeight; // @synthesize detailHeight=_detailHeight;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onMessageDownloadThumbImageOK;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (id)sourceIcon;
- (id)sourceTitle;
- (id)finderUsername;
@property(readonly, nonatomic) TingShareListenItem *shareListenItem;
- (_Bool)isShowSourceView;
@property(readonly, nonatomic) TingItem *tingItem;
- (_Bool)shouldShowSourceViewInContent;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

