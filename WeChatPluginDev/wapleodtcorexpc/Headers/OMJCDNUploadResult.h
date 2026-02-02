//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJCDNUploadResult : NSObject
{
    NSString *_taskKey;
    NSString *_cdnURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cdnURL; // @synthesize cdnURL=_cdnURL;
@property(readonly, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (id)initWithTaskKey:(id)arg1 cdnURL:(id)arg2;

@end

