//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFeedCacheInfo : NSObject
{
    int _commentScene;
    NSString *_tid;
    unsigned long long _fileSize;
}

+ (void)initialize;
+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_tid;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

