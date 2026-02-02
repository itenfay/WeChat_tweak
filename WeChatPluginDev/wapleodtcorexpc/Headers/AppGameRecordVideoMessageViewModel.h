//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface AppGameRecordVideoMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (struct CGSize)getPageSize;
- (struct CGSize)getDescSize;
- (struct CGSize)getTitleSize;
- (void)UpdateVideoMsg:(id)arg1;
- (_Bool)isChatroom;
- (id)thumbData;
- (id)thumbUrl;
- (id)sourceIconUrlString;
- (id)sourceTag;
- (id)sourceIcon;
- (_Bool)isShowSourceView;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

