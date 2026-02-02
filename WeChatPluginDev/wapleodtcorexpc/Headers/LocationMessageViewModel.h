//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface LocationMessageViewModel
{
}

+ (id)locationChatNamePath:(id)arg1 ThumeImageStyle:(unsigned long long)arg2;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (id)getLocationThumbImage:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

