//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnUploadTaskInfo, NSString;

@interface MJCdnUploadResult : NSObject
{
    CdnUploadTaskInfo *_taskInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CdnUploadTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(readonly, copy, nonatomic) NSString *fileCdnURL;
@property(readonly, copy, nonatomic) NSString *taskKey;
- (id)initWithTaskInfo:(id)arg1;

@end

