//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJCDNUploadRequest : NSObject
{
    NSString *_taskKey;
    unsigned long long _cdnScene;
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) unsigned long long cdnScene; // @synthesize cdnScene=_cdnScene;
@property(readonly, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTaskKey:(id)arg1 cdnScene:(unsigned long long)arg2 filePath:(id)arg3;

@end

