//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMAssetEditImageConfig
{
}

+ (id)ConfigInstance;
- (struct CGSize)imageSizeLimit;
- (_Bool)isRetrivingOriginEditedImage;
- (_Bool)shouldCompressLongImage;
- (_Bool)isRetrivingOriginImage;

@end

