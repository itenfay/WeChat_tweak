//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMLiveResourceFetcherTask : NSObject
{
    NSString *_taskId;
    NSString *_resourceUri;
    NSString *_cachingPath;
    unsigned long long _integrityValidationType;
    NSString *_expectedDigest;
    id _userInfo;
    NSString *_downloadWorkingPath;
    NSString *_digestPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *digestPath; // @synthesize digestPath=_digestPath;
@property(retain, nonatomic) NSString *downloadWorkingPath; // @synthesize downloadWorkingPath=_downloadWorkingPath;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *expectedDigest; // @synthesize expectedDigest=_expectedDigest;
@property(nonatomic) unsigned long long integrityValidationType; // @synthesize integrityValidationType=_integrityValidationType;
@property(retain, nonatomic) NSString *cachingPath; // @synthesize cachingPath=_cachingPath;
@property(retain, nonatomic) NSString *resourceUri; // @synthesize resourceUri=_resourceUri;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) NSMutableArray *pinnedPaths;
- (id)initWithResourceUri:(id)arg1 cachingPath:(id)arg2;

@end

