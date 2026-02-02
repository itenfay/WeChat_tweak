//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface ImageTextReaderMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) double readerItemLMargin;
@property(readonly, nonatomic) double readerViewWidth;
@property(readonly, nonatomic) double itemInsideWidth;
- (_Bool)isReaderWrapInvalidUrlJumpType;
- (_Bool)isReaderWrapWeappJumpType;
- (_Bool)isShowReadAll;
- (_Bool)isDisableEditMode;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

