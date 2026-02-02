//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol BrandProfileFuwuBaseViewDelegate;

@interface BrandProfileFuwuBaseView
{
    _Bool _shouldHideTopDividingLine;
    id <BrandProfileFuwuBaseViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldHideTopDividingLine; // @synthesize shouldHideTopDividingLine=_shouldHideTopDividingLine;
@property(nonatomic) __weak id <BrandProfileFuwuBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)calcuteFuwuViewHeight;
- (void)updateFuwuInfo:(id)arg1;

@end

