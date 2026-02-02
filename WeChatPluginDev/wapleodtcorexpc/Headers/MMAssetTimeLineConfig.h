//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMAssetTimeLineConfig
{
    _Bool _useHighResolutionImageSize;
}

+ (id)ConfigInstance;
@property(nonatomic) _Bool useHighResolutionImageSize; // @synthesize useHighResolutionImageSize=_useHighResolutionImageSize;
- (double)compressQuality;
- (struct CGSize)imageSizeLimit;
- (_Bool)shouldCompressLongImage;
- (_Bool)isRetrivingOriginImage;

@end

