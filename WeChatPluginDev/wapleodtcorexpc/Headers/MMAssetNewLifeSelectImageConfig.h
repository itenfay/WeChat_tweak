//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMAssetNewLifeSelectImageConfig : NSObject
{
}

+ (id)ConfigInstance;
- (double)compressQuality;
- (struct CGSize)imageSizeLimit;
- (_Bool)shouldCompressLongImage;
- (_Bool)isRetrivingOriginImage;

@end

