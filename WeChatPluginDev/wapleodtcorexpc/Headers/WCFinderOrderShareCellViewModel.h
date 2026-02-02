//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderOrderShareCellViewModel
{
}

+ (id)tagFont;
+ (id)titleFont;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, copy, nonatomic) NSString *priceWording;
@property(readonly, copy, nonatomic) NSString *stateWording;
@property(readonly, copy, nonatomic) NSString *productImageURL;
- (id)item;
- (double)estimateWidth;
- (struct CGSize)defaultContentViewSize;
- (id)productsWordingForWidth:(double)arg1 font:(id)arg2;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

