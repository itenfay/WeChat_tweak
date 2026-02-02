//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMAssetHeadImageConfig
{
}

+ (id)ConfigInstance;
- (_Bool)shouldCompressLongImage;
- (double)compressQuality;
- (struct CGSize)imageSizeLimit;
- (_Bool)isRetrivingOriginImage;

@end

