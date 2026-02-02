//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanGoodsItemExchangeInfo, CameraScanGoodsItemPerformanceInfo, CameraScanGoodsItemQualityInfo, NSData, NSNumber, NSString, UIImage;

@interface CameraScanGoodsItemViewModel
{
    unsigned int _scanType;
    unsigned int _itemSource;
    NSString *_detectSessionId;
    NSNumber *_trackId;
    NSData *_itemImageData;
    UIImage *_itemCropImage;
    NSString *_reqKey;
    CameraScanGoodsItemExchangeInfo *_exchangeInfo;
    CameraScanGoodsItemQualityInfo *_qualityInfo;
    CameraScanGoodsItemPerformanceInfo *_performanceInfo;
    long long _imageSource;
    struct CGRect _normalizeRect;
    struct Mat _detectImage;
}

+ (id)genDetectSessionId;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct Mat detectImage; // @synthesize detectImage=_detectImage;
@property(nonatomic) unsigned int itemSource; // @synthesize itemSource=_itemSource;
@property(nonatomic) long long imageSource; // @synthesize imageSource=_imageSource;
@property(nonatomic) unsigned int scanType; // @synthesize scanType=_scanType;
@property(retain, nonatomic) CameraScanGoodsItemPerformanceInfo *performanceInfo; // @synthesize performanceInfo=_performanceInfo;
@property(retain, nonatomic) CameraScanGoodsItemQualityInfo *qualityInfo; // @synthesize qualityInfo=_qualityInfo;
@property(retain, nonatomic) CameraScanGoodsItemExchangeInfo *exchangeInfo; // @synthesize exchangeInfo=_exchangeInfo;
@property(copy, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(retain, nonatomic) UIImage *itemCropImage; // @synthesize itemCropImage=_itemCropImage;
@property(retain, nonatomic) NSData *itemImageData; // @synthesize itemImageData=_itemImageData;
@property(nonatomic) struct CGRect normalizeRect; // @synthesize normalizeRect=_normalizeRect;
@property(retain, nonatomic) NSNumber *trackId; // @synthesize trackId=_trackId;
@property(copy, nonatomic) NSString *detectSessionId; // @synthesize detectSessionId=_detectSessionId;
- (void)updateNormalizeRectWithGoodsObject:(id)arg1;
- (void)printPerformance;
- (id)init;

@end

