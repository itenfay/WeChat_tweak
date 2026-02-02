//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJCDNDownloadRequest : NSObject
{
    NSString *_taskKey;
    unsigned long long _cdnScene;
    NSString *_cdnURL;
    NSString *_resultFilePath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *resultFilePath; // @synthesize resultFilePath=_resultFilePath;
@property(readonly, nonatomic) NSString *cdnURL; // @synthesize cdnURL=_cdnURL;
@property(readonly, nonatomic) unsigned long long cdnScene; // @synthesize cdnScene=_cdnScene;
@property(readonly, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTaskKey:(id)arg1 cdnScene:(unsigned long long)arg2 cdnURL:(id)arg3 resultFilePath:(id)arg4;

@end

