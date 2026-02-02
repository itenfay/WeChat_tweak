//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface BrandEcsPrivateMsgViewModel
{
    _Bool _hasExposure;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) _Bool hasExposure; // @synthesize hasExposure=_hasExposure;
@property(readonly, nonatomic) double readerViewInsideWidth;
@property(readonly, nonatomic) double readerItemLMargin;
@property(readonly, nonatomic) double readerViewWidth;
- (struct CGSize)measure:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)init;

@end

