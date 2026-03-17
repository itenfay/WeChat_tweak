//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMAssetConfigObject : NSObject
{
    _Bool _disableConvertRawImageData;
}

@property(nonatomic) _Bool disableConvertRawImageData; // @synthesize disableConvertRawImageData=_disableConvertRawImageData;
- (id)description;
- (_Bool)disableOpportunisticDeliverMode;
- (_Bool)isRetrivingOriginEditedImage;
- (unsigned long long)minNoneCompressLongImageSize;
- (unsigned long long)minNoneCompressNormalImageSize;
- (double)minCompressEarnings;
- (double)compressQuality;
- (struct CGSize)imageResultSizeForOriginSize:(struct CGSize)arg1;
- (_Bool)isCompressResolutionSizeValid:(struct CGSize)arg1;
- (struct CGSize)imageSizeLimit;
- (_Bool)shouldCompressLongImage;
- (_Bool)isRetrivingOriginImage;

@end

