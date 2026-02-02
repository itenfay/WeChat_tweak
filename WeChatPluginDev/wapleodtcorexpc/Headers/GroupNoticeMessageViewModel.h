//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GroupNoticeMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (_Bool)canShowRevokeMsgMenuItem;
- (id)jumpButtonFont;
- (double)jumpButtonHeight;
- (_Bool)canShowJumpButton;
- (double)contentHeight;
- (id)contentText;
- (struct CGSize)contentTextSize;
- (struct CGSize)calculateContentTextSize;
- (_Bool)isLongSplitMessage;

@end

