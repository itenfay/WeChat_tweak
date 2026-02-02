//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SearchCgiConfigData : NSObject
{
    unsigned int _baseTime;
    unsigned int _expiredTime;
    unsigned int _clientVersion;
    unsigned int _h5Version;
    NSMutableDictionary *dicWSConfig;
    NSString *_searchID;
    NSString *_lang;
    NSMutableDictionary *_dicData;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicData;
+ (void)PBArrayAdd_lang;
+ (void)PBArrayAdd_h5Version;
+ (void)PBArrayAdd_clientVersion;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_baseTime;
+ (void)PBArrayAdd_searchID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicData; // @synthesize dicData=_dicData;
@property(retain, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(nonatomic) unsigned int h5Version; // @synthesize h5Version=_h5Version;
@property(nonatomic) unsigned int clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) unsigned int baseTime; // @synthesize baseTime=_baseTime;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(retain, nonatomic) NSMutableDictionary *dicWSConfig; // @synthesize dicWSConfig;
- (_Bool)checkLangValid;
- (_Bool)checkValid;
- (void)setCurrentContext;
- (void)reset;
- (void)updateWSConfig;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

