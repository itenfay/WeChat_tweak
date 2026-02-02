//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AppTVItem : NSObject
{
    NSString *_tvInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_tvInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tvInfo; // @synthesize tvInfo=_tvInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toXML;
- (void)dealloc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

