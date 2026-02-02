//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiveSubTitleCacheInfo : NSObject
{
    unsigned int _isClosed;
    unsigned long long _liveStartTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_isClosed;
+ (void)PBArrayAdd_liveStartTime;
@property(nonatomic) unsigned int isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) unsigned long long liveStartTime; // @synthesize liveStartTime=_liveStartTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

