//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveFeedPreviewTaskId : NSObject
{
    NSString *_taskKey;
    unsigned long long _liveId;
    NSString *_uniqueId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (_Bool)isValid;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)createTaskKey;
- (id)taskKey;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

