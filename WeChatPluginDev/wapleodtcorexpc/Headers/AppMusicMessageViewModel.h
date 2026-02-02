//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface AppMusicMessageViewModel
{
    double m_titleHeight;
    double m_detailHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) double detailHeight; // @synthesize detailHeight=m_detailHeight;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=m_titleHeight;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (void)onMessageDownloadThumbImageOK;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

