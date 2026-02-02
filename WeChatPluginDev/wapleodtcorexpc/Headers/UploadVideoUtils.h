//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UploadVideoUtils : NSObject
{
}

+ (id)geneateNoApacExportSessionWithAsset:(id)arg1;
+ (_Bool)isApacCodecTrack:(id)arg1;
+ (_Bool)isCanRetryUploadVideoRawData:(id)arg1;
+ (_Bool)isCanRetryUploadVideoCompressData:(id)arg1;
+ (_Bool)isCanRetryUpload:(id)arg1;
+ (unsigned long long)getVideoUploadValidateTime;
+ (unsigned long long)getLimitSendFileSize;
+ (_Bool)isOpenOccupyMsgSend;
+ (_Bool)isOpenSelectRawVideo;
+ (int)getMaxRetryCount;
+ (unsigned int)getMediaSource:(unsigned int)arg1;
+ (int)getNetworkType;
+ (_Bool)canUseMultiSocket:(id)arg1;
+ (id)getRawOutputFilePathFrom:(id)arg1;
+ (id)getRawCacheFilePathFrom:(id)arg1;

@end

