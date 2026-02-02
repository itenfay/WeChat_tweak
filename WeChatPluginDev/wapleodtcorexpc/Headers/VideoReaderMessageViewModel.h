//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VideoReaderMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)accessibilityDescription;
@property(readonly, nonatomic) double labelMaxWidth;
- (struct CGSize)calculateTitleViewSize;
@property(readonly, nonatomic) NSString *timeText;
- (double)messageNodeViewHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

