//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPDownloadProxyHelper : NSObject
{
}

+ (id)getNativeInfo:(int)arg1;
+ (_Bool)isMidReadyForOfflineDownload;
+ (void)setIsReadyForOfflineDownload:(_Bool)arg1;
+ (long long)getOfflineRecordDurationWithVid:(id)arg1 format:(id)arg2;
+ (void)setTPProxyAdapter:(id)arg1;
+ (id)getOfflineRecordVinfo:(id)arg1 withFormat:(id)arg2;
+ (long long)verifyOfflineCacheSync:(id)arg1 fileFormat:(int)arg2 resourceId:(id)arg3 keyId:(id)arg4;
+ (id)getHLSOfflineExttagWithVid:(id)arg1 linkVid:(id)arg2 formatId:(int)arg3 randomNum:(long long)arg4;
+ (id)getNativeLibVersion;

@end

