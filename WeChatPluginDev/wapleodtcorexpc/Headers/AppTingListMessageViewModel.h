//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TingShareCategoryItem;

@interface AppTingListMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onMessageDownloadThumbImageOK;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (id)tingShareListBackgroundColor;
@property(readonly, nonatomic) TingShareCategoryItem *shareCategoryItem;
- (_Bool)isShowSourceView;
- (_Bool)shouldShowSourceViewInContent;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (double)cellHeight;
- (id)cellViewClassName;

@end

