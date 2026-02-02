//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMWebAttachmentReporter : NSObject
{
}

+ (void)reportWKDownloadKVWithWebViewUrlStr:(id)arg1 fileUrlStr:(id)arg2 contentType:(id)arg3 contentDispositionType:(id)arg4 contentDispositionFileExtName:(id)arg5;
+ (void)reportKVWithWebViewUrlStr:(id)arg1 fileUrlStr:(id)arg2 contentType:(id)arg3 contentDispositionType:(id)arg4 contentDispositionFileExtName:(id)arg5;
+ (void)reportWKDownloadIdKeyWithKey:(unsigned int)arg1 value:(unsigned int)arg2;
+ (void)reportIdKeyWithKey:(unsigned int)arg1 value:(unsigned int)arg2;
+ (void)reportWKDownloadIdKeyWithContentDispositionType:(id)arg1;
+ (void)reportIdKeyWithContentDispositionType:(id)arg1;
+ (void)reportWKDownloadIdKeyWithContentType:(id)arg1;
+ (void)reportIdKeyWithContentType:(id)arg1;

@end

