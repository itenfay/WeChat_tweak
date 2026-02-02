//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface FTSTopHitExtList : NSObject
{
    NSMutableArray *_arrTopHit;
}

+ (void)initialize;
+ (void)PBArrayAdd_arrTopHit;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrTopHit; // @synthesize arrTopHit=_arrTopHit;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

