//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SessionFoldCache : NSObject
{
    _Bool _isFolded;
    NSMutableDictionary *_dicUserNameFold;
}

+ (void)initialize;
+ (void)PBArrayAdd_isFolded;
+ (void)PBArrayAdd_dicUserNameFold;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFolded; // @synthesize isFolded=_isFolded;
@property(retain, nonatomic) NSMutableDictionary *dicUserNameFold; // @synthesize dicUserNameFold=_dicUserNameFold;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

