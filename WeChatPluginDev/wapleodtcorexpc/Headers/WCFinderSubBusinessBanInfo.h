//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderSubBusinessBanInfo : NSObject
{
    long long _curIndex;
    NSMutableArray *_businessArray;
}

+ (void)initialize;
+ (void)PBArrayAdd_businessArray;
+ (void)PBArrayAdd_curIndex;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *businessArray; // @synthesize businessArray=_businessArray;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
- (void)moveToNextIndex;
- (id)getTargetNumber;
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

