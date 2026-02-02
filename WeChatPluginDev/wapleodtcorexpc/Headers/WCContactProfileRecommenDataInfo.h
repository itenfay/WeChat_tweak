//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCContactProfileRecommenDataInfo : NSObject
{
    NSMutableDictionary *_dicProfileRecommen;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicProfileRecommen;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicProfileRecommen; // @synthesize dicProfileRecommen=_dicProfileRecommen;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

