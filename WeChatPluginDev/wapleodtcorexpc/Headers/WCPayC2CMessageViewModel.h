//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCPayC2CMessageViewModel
{
    _Bool _hasGetFullCoverInfoDetail;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) _Bool hasGetFullCoverInfoDetail; // @synthesize hasGetFullCoverInfoDetail=_hasGetFullCoverInfoDetail;
- (void)updateCoverInfoFullContent;
- (id)bubbleAtmosphereUrl;
- (id)pagWidgateMd5;
- (id)bubblePagUrl;
- (struct CGSize)measure:(struct CGSize)arg1;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
- (_Bool)shouldHideBubbleDescLabel;
- (id)getExclusiveHbNickname;
- (_Bool)isExclusiveHongBaoMsg;
- (id)bubbleWidgetMd5;
- (id)bubbleWidgetUrl;
- (id)redEnvelopeShowResource;
- (id)additionalAccessibilityDescription;
- (id)iconUrl;
- (unsigned long long)bubbleType;
- (id)iconName;
- (double)iconSize;
- (id)redSkinLogoMd5;
- (id)redSkinLogoUrl;
- (id)descText;
- (id)titleText;
- (id)sourceTag;
- (id)sourceTitle;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

