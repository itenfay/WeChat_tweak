//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface ImageReaderMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)accessibilityDescription;
@property(readonly, nonatomic) struct CGSize imgIconSize;
- (id)digestText;
- (double)coverImageHeight;
@property(readonly, nonatomic) unsigned int imageCount;
- (double)messageNodeViewHeight;
- (struct CGSize)calculateDigestViewSize;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

