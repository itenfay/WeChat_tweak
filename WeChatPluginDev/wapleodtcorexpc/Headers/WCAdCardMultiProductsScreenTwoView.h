//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSArray, NSMutableArray, NSString;

@interface WCAdCardMultiProductsScreenTwoView
{
    NSArray *_imageUrls;
    NSString *_productDesc;
    NSMutableArray *_imageViews;
    MMUILabel *_productDescView;
    NSMutableArray *_imagesOriCenter;
    struct CGPoint _descOriCenter;
}

+ (double)calcHeightWithMaxWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint descOriCenter; // @synthesize descOriCenter=_descOriCenter;
@property(retain, nonatomic) NSMutableArray *imagesOriCenter; // @synthesize imagesOriCenter=_imagesOriCenter;
@property(retain, nonatomic) MMUILabel *productDescView; // @synthesize productDescView=_productDescView;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSString *productDesc; // @synthesize productDesc=_productDesc;
@property(retain, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
- (id)getObjectsToAppear;
- (id)getObjectsToDisappear;
- (void)adaptImageLayoutInfoWithMaxWidth:(double)arg1 imageWidth:(double *)arg2 imageGap:(double *)arg3;
- (id)generateImageViewWithUrl:(id)arg1;
- (void)generateImageViews;
- (void)resizeSubviewsWithSize:(struct CGSize)arg1;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imageUrls:(id)arg2 productDesc:(id)arg3;

@end

