//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImage;

@interface AppLimitedModeGuardianMessageViewModel
{
    double m_titleHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=m_titleHeight;
- (id)additionalAccessibilityDescription;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
@property(readonly, nonatomic) UIImage *thumbImage;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

