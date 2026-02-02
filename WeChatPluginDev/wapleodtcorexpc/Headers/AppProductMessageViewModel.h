//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ScanProductItem;

@interface AppProductMessageViewModel
{
    ScanProductItem *m_productItem;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)productItem;
- (id)thumbImage;
- (id)descText;
- (id)titleText;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (id)additionalAccessibilityDescription;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

