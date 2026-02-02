//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SnsMusicStorage : NSObject
{
    int _newCount;
    NSMutableArray *_musicsArr;
}

+ (void)initialize;
+ (void)PBArrayAdd_newCount;
+ (void)PBArrayAdd_musicsArr;
- (void).cxx_destruct;
@property(nonatomic) int newCount; // @synthesize newCount=_newCount;
@property(retain, nonatomic) NSMutableArray *musicsArr; // @synthesize musicsArr=_musicsArr;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

