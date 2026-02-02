//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CdnServiceReporter : NSObject
{
}

+ (void)ReportCdnServiceErrorWithRequestFileType:(int)arg1 appType:(int)arg2 errorCode:(int)arg3 fileKey:(id)arg4 reportType:(int)arg5;
+ (void)ReportWhenUploadErrorWithRequest:(void *)arg1 errorCode:(int)arg2;
+ (void)ReportWhenStartUploadErrorWithRequest:(void *)arg1 errorCode:(int)arg2;
+ (void)ReportWhenDownloadErrorWithRequest:(void *)arg1 errorCode:(int)arg2;
+ (void)ReportWhenStartDownloadErrorWithRequest:(void *)arg1 errorCode:(int)arg2;

@end

