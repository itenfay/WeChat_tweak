//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayOverseaPayFunctionListRespObject : NSObject
{
    NSArray *_m_functionList;
    NSArray *_m_typeInfoList;
}

+ (id)cacheObjectWithTpaCountry:(unsigned int)arg1;
+ (void)checkFileWithTpaCountry:(unsigned int)arg1;
+ (id)getSavePathWithTpaCountry:(unsigned int)arg1;
+ (id)getSaveRootDir;
+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_typeInfoList;
+ (void)PBArrayAdd_m_functionList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_typeInfoList; // @synthesize m_typeInfoList=_m_typeInfoList;
@property(retain, nonatomic) NSArray *m_functionList; // @synthesize m_functionList=_m_functionList;
- (void)saveToCacheWithTpaCountry:(unsigned int)arg1;
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

