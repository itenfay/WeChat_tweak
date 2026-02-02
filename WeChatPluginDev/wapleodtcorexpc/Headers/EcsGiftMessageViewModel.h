//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EcsGiftMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void)updateBgBubbleType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long bubbleType;
- (id)sourceTitle;
- (id)wishText;
- (id)tagText;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (struct CGSize)viewSize;
- (id)cellViewClassName;

@end

