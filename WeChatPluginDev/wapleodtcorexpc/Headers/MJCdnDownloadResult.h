//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnDownloadTaskInfo, NSString;

@interface MJCdnDownloadResult : NSObject
{
    CdnDownloadTaskInfo *_taskInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CdnDownloadTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(readonly, copy, nonatomic) NSString *filePath;
- (id)initWithTaskInfo:(id)arg1;

@end

