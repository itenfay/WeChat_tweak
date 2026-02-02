//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDeepCleanResource : NSObject
{
    _Bool bCleanning;
    _Bool bStop;
    float progressLevel;
    unsigned long long _totalSize;
}

+ (_Bool)getShouldDeleteHeadImg;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) _Bool bStop; // @synthesize bStop;
@property(nonatomic) _Bool bCleanning; // @synthesize bCleanning;
@property(nonatomic) float progressLevel; // @synthesize progressLevel;
- (void)refreshState;
- (void)stop;
- (void)cleanData;
- (unsigned long long)getClassSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

