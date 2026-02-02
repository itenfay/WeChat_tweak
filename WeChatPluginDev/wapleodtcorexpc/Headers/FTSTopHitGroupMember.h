//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface FTSTopHitGroupMember : NSObject
{
    NSMutableSet *_setMatchTypeStr;
}

+ (void)initialize;
+ (void)PBArrayAdd_setMatchTypeStr;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *setMatchTypeStr; // @synthesize setMatchTypeStr=_setMatchTypeStr;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

