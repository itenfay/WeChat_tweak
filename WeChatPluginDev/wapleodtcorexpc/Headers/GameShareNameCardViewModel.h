//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameShareNameCardViewModel
{
    NSString *m_sharedUsername;
    NSString *m_sharedNickname;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)headImageUrl;
- (id)desc;
- (id)name;

@end

