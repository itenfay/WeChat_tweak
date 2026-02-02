//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCSessionFlowConfigModel
{
    NSMutableArray *_sessionsArray;
    NSMutableDictionary *_sessionsDicForPageName;
    NSMutableDictionary *_sessionsDicForSid;
    NSString *_originalJson;
    NSMutableArray *_blackListPages;
    NSMutableArray *_mainTabPages;
    NSMutableArray *_filterPages;
}

+ (void)initialize;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_filterPages;
+ (void)PBArrayAdd_mainTabPages;
+ (void)PBArrayAdd_blackListPages;
+ (void)PBArrayAdd_sessionsArray;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *filterPages; // @synthesize filterPages=_filterPages;
@property(retain, nonatomic) NSMutableArray *mainTabPages; // @synthesize mainTabPages=_mainTabPages;
@property(retain, nonatomic) NSMutableArray *blackListPages; // @synthesize blackListPages=_blackListPages;
@property(retain, nonatomic) NSString *originalJson; // @synthesize originalJson=_originalJson;
@property(retain) NSMutableDictionary *sessionsDicForSid; // @synthesize sessionsDicForSid=_sessionsDicForSid;
@property(retain) NSMutableDictionary *sessionsDicForPageName; // @synthesize sessionsDicForPageName=_sessionsDicForPageName;
@property(retain, nonatomic) NSMutableArray *sessionsArray; // @synthesize sessionsArray=_sessionsArray;
- (id)toString;
- (void)initCacheDictionary;
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

