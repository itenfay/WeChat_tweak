//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MultiColumnReaderMessageViewModel
{
    _Bool _footerLabelHasClicked;
    _Bool _isMuted;
    _Bool _forceHideRightCoverImage;
}

+ (id)getMessageFTSText:(id)arg1;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) _Bool forceHideRightCoverImage; // @synthesize forceHideRightCoverImage=_forceHideRightCoverImage;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) _Bool footerLabelHasClicked; // @synthesize footerLabelHasClicked=_footerLabelHasClicked;
- (_Bool)isEcsKfCard;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)makeSearchPreview:(id)arg1;
- (double)messageNodeViewHeight;
- (double)messageNodeViewWidth;
- (_Bool)hasMoneyUnit:(id)arg1;
- (struct CGSize)muteSloganSize;
- (id)muteSloganFont;
- (id)muteSloganStr;
- (id)headerMenuImage;
- (id)footerLabelFont;
- (id)footerContentString;
- (_Bool)shouldShowFooterView;
- (_Bool)getNewMsgRecvSwitch;
- (_Bool)isShowHeadImageAndNickname;
- (_Bool)isShowHeadAndNicknameArea;
- (struct CGSize)headerMenuSize;
@property(readonly, nonatomic) double readerLineLMargin;
@property(readonly, nonatomic) double readerItemLMargin;
- (double)rightCoverImageHeight;
- (double)rightCoverImageWidth;
- (_Bool)canShowRightCoverImage;
- (double)itemKeyLabelMaxWidth;
@property(readonly, nonatomic) double itemInsideWidth;
@property(readonly, nonatomic) double readerViewWidth;
@property(readonly, nonatomic) double readerViewInsideWidth;
- (_Bool)isNewPaymsgType;
- (_Bool)isReaderWrapScheduleJumpType;
- (_Bool)isReaderWrapInvalidUrlJumpType;
- (_Bool)isReaderWrapWeappJumpType;
- (_Bool)isShowReadAll;
- (double)measureScheduleContentViewHeight:(id)arg1 originY:(double)arg2;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

