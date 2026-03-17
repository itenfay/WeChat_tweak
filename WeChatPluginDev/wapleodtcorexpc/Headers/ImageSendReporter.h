//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ImageSendReporter : NSObject
{
}

+ (void)doReportWithErrorCode:(long long)arg1 msgStatTaskError:(long long)arg2 cdnErrorCode:(long long)arg3 cgiErrorCode:(long long)arg4 extraInfo:(id)arg5;
+ (void)reportSendFailWithCgiError:(long long)arg1;
+ (void)reportUploadFailWithMsgStatError:(long long)arg1 cdnError:(long long)arg2;
+ (void)reportAssetError:(long long)arg1;

@end

