//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSAttributedString;

@interface AttributedReaderMessageViewModel
{
    NSAttributedString *m_digestAttrString;
    _Bool _forceHideRightCoverImage;
}

+ (id)getMessageFTSText:(id)arg1;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceHideRightCoverImage; // @synthesize forceHideRightCoverImage=_forceHideRightCoverImage;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (double)messageNodeViewHeight;
- (double)messageNodeViewWidth;
@property(readonly, nonatomic) NSAttributedString *digestAttrString;
- (id)makeSearchPreview:(id)arg1;
@property(readonly, nonatomic) double readerItemHMargin;
@property(readonly, nonatomic) double readerItemLMargin;
@property(readonly, nonatomic) double readerViewWidth;
- (double)rightCoverImageHeight;
- (double)rightCoverImageWidth;
- (_Bool)canShowRightCoverImage;
@property(readonly, nonatomic) double itemInsideWidth;
@property(readonly, nonatomic) double readerViewInsideWidth;
- (_Bool)isReaderWrapInvalidUrlJumpType;
- (_Bool)isReaderWrapWeappJumpType;
- (_Bool)isShowHeadAndNicknameArea;
- (_Bool)isShowReadAll;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

@end

