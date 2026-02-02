//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface OpenImContactTypeResource : NSObject
{
    unsigned int _updateTime;
    NSString *_language;
    NSString *_acctType;
    NSMutableDictionary *_wordings;
    NSMutableDictionary *_urls;
}

+ (void)initialize;
+ (void)PBArrayAdd_urls;
+ (void)PBArrayAdd_wordings;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_acctType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *urls; // @synthesize urls=_urls;
@property(retain, nonatomic) NSMutableDictionary *wordings; // @synthesize wordings=_wordings;
@property(retain, nonatomic) NSString *acctType; // @synthesize acctType=_acctType;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

