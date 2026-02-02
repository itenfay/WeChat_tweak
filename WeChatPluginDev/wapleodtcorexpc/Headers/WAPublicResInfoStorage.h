//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WAPublicResInfoStorage : NSObject
{
    NSMutableDictionary *_dicPublicInfo;
}

+ (_Bool)saveStorage:(id)arg1 toPath:(id)arg2;
+ (id)loadStorageFromPath:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_dicPublicInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicPublicInfo; // @synthesize dicPublicInfo=_dicPublicInfo;
- (void)adjustOldPublicResVersion;
- (id)getDescendingVersion;
- (id)getLatestVersionResInfo;
- (void)deleteResInfoBeyondShouldKeepVersion:(id)arg1;
- (void)deleteResInfoWithVersion:(unsigned int)arg1;
- (void)saveResInfo:(id)arg1 withVersion:(unsigned int)arg2;
- (_Bool)hasVersion:(unsigned int)arg1;
- (void)forceUpdate2Version:(unsigned int)arg1;
- (id)getShouldKeepPublicResVersionArr;
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

