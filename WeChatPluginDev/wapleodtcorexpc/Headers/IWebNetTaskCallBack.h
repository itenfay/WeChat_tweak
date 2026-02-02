//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface IWebNetTaskCallBack : NSObject
{
}

- (void)OnDownloadCompleted:(id)arg1 response:(id)arg2;
- (void)OnProgressChanged:(id)arg1 completedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)OnUploadCompleted:(id)arg1 response:(id)arg2;

@end

