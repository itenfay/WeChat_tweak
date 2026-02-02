//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface NewLifeImageCdnDownloader : NSObject
{
}

+ (void)cancelDownloadWithMediaId:(id)arg1;
+ (void)startDownload:(id)arg1 progressCallback:(CDUnknownBlockType)arg2 endCallback:(CDUnknownBlockType)arg3;

@end
