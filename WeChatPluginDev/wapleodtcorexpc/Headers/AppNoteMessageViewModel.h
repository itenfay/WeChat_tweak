//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface AppNoteMessageViewModel
{
    NSString *m_titleText;
    NSString *m_contentText;
    double m_titleHeight;
    double m_contentHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) int imageCount;
@property(readonly, nonatomic) double contentHeight;
@property(readonly, nonatomic) double titleHeight;
@property(readonly, nonatomic) NSString *contentText;
@property(readonly, nonatomic) NSString *titleText;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

