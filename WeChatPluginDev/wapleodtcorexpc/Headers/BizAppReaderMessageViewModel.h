//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizAppReaderMessageBigPicViewModel, NSMutableArray, NSString, UIImage;

@interface BizAppReaderMessageViewModel
{
    _Bool _isNearbyNativeAppMsg;
    BizAppReaderMessageBigPicViewModel *_bigPicViewModel;
    NSMutableArray *_bigPicTitleLabelStyles;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *bigPicTitleLabelStyles; // @synthesize bigPicTitleLabelStyles=_bigPicTitleLabelStyles;
@property(readonly, nonatomic) _Bool isNearbyNativeAppMsg; // @synthesize isNearbyNativeAppMsg=_isNearbyNativeAppMsg;
- (id)accessibilityMessageType;
- (id)bigPicViewStyle;
- (void)onSourceInfoUpdated;
@property(readonly, nonatomic) BizAppReaderMessageBigPicViewModel *bigPicViewModel; // @synthesize bigPicViewModel=_bigPicViewModel;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
@property(readonly, nonatomic) double sourceTopPadding;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
@property(readonly, nonatomic) UIImage *thumbImage;
@property(readonly, nonatomic) NSString *thumbSquareUrl;
@property(readonly, nonatomic) NSString *thumbRectangleUrl;
- (id)sourceDetailStr;
- (double)digestMaxWidth;

@end

