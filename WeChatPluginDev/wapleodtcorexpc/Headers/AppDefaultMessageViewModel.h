//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImage;

@interface AppDefaultMessageViewModel
{
    double m_titleHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=m_titleHeight;
- (void)onMessageDownloadThumbImageOK;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) UIImage *thumbImage;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

