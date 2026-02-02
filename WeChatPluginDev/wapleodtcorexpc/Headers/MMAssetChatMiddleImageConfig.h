//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMAssetChatMiddleImageConfig
{
}

+ (id)ConfigInstance;
- (unsigned int)getMaxSize;
- (double)compressQuality;
- (struct CGSize)imageSizeLimit;
- (_Bool)shouldCompressLongImage;
- (_Bool)isRetrivingOriginImage;

@end

