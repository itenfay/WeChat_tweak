//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TextStatePassthroughIconList : NSObject
{
    unsigned long long _key;
    NSMutableArray *_passthroughIconList;
}

+ (void)initialize;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_passthroughIconList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *passthroughIconList; // @synthesize passthroughIconList=_passthroughIconList;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
- (id)initWithAgenda:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

