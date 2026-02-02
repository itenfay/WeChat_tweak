//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface OpenIMContactExtendCodePB : NSObject
{
    NSMutableDictionary *_configDic;
}

+ (void)initialize;
+ (void)PBArrayAdd_configDic;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *configDic; // @synthesize configDic=_configDic;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

