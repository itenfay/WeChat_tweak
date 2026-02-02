//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCDeepCleanOtherUser : NSObject
{
    _Bool bCleanning;
    _Bool bStop;
    float progressLevel;
    NSArray *_otherUserPaths;
    NSArray *_otherUserMapids;
    unsigned long long _totalSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSArray *otherUserMapids; // @synthesize otherUserMapids=_otherUserMapids;
@property(retain, nonatomic) NSArray *otherUserPaths; // @synthesize otherUserPaths=_otherUserPaths;
@property(nonatomic) _Bool bStop; // @synthesize bStop;
@property(nonatomic) _Bool bCleanning; // @synthesize bCleanning;
@property(nonatomic) float progressLevel; // @synthesize progressLevel;
- (void)cleanData;
- (unsigned long long)getClassSize;
- (void)refreshState;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

