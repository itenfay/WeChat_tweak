//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WAFileSpaceStatus : NSObject
{
    unsigned long long _totalFileSize;
    NSMutableDictionary *_dicAppItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicAppItem;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicAppItem; // @synthesize dicAppItem=_dicAppItem;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(readonly, copy) NSString *description;
- (void)updateTotalFileSize;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

