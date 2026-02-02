//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveMagicEngineResourcePathPlugin : NSObject
{
    NSString *_rootId;
    NSString *_suffixName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *suffixName; // @synthesize suffixName=_suffixName;
@property(retain, nonatomic) NSString *rootId; // @synthesize rootId=_rootId;
- (id)zipPath:(id)arg1;
- (id)unzipPath:(id)arg1;
- (id)resPath:(id)arg1;
- (id)cachePath:(id)arg1;
- (id)tempCacheFolder;
- (id)cacheFolder;
- (id)initWithRootId:(id)arg1 suffixName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

