//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJTemplateDynamicInfo : NSObject
{
    unsigned long long _postCount;
    unsigned long long _favFlag;
}

+ (void)initialize;
+ (void)PBArrayAdd_favFlag;
+ (void)PBArrayAdd_postCount;
@property(nonatomic) unsigned long long favFlag; // @synthesize favFlag=_favFlag;
@property(nonatomic) unsigned long long postCount; // @synthesize postCount=_postCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDycamicInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

