//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface FTSTopHitItem : NSObject
{
    NSString *_searchText;
    NSMutableArray *_arrTopHitValue;
}

+ (void)initialize;
+ (void)PBArrayAdd_arrTopHitValue;
+ (void)PBArrayAdd_searchText;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrTopHitValue; // @synthesize arrTopHitValue=_arrTopHitValue;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
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

