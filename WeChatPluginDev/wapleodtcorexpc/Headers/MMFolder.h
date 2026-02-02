//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBizFileMatchNode, NSMutableArray, NSString;

@interface MMFolder : NSObject
{
    _Bool _bFoundCache;
    int _level;
    int _m_onlyFileTypeInUse;
    int _m_onlyWeChatFileClass;
    NSString *_name;
    long long _size;
    NSMutableArray *_subFolders;
    NSMutableArray *_subFiles;
    long long _diffCacheSize;
    long long _m_onlyBizType;
    long long _m_storeTimeType;
    MMBizFileMatchNode *_m_bizMatchNode;
}

+ (struct MMBizMatchInfo)fileMatched:(id)arg1 inFolder:(id)arg2;
+ (void)matchBizWithChildFolder:(id)arg1 parentFolder:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_bFoundCache;
+ (void)PBArrayAdd_diffCacheSize;
+ (void)PBArrayAdd_subFolders;
+ (void)PBArrayAdd_subFiles;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_name;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBizFileMatchNode *m_bizMatchNode; // @synthesize m_bizMatchNode=_m_bizMatchNode;
@property(nonatomic) long long m_storeTimeType; // @synthesize m_storeTimeType=_m_storeTimeType;
@property(nonatomic) int m_onlyWeChatFileClass; // @synthesize m_onlyWeChatFileClass=_m_onlyWeChatFileClass;
@property(nonatomic) int m_onlyFileTypeInUse; // @synthesize m_onlyFileTypeInUse=_m_onlyFileTypeInUse;
@property(nonatomic) long long m_onlyBizType; // @synthesize m_onlyBizType=_m_onlyBizType;
@property(nonatomic) _Bool bFoundCache; // @synthesize bFoundCache=_bFoundCache;
@property(nonatomic) long long diffCacheSize; // @synthesize diffCacheSize=_diffCacheSize;
@property(retain, nonatomic) NSMutableArray *subFiles; // @synthesize subFiles=_subFiles;
@property(retain, nonatomic) NSMutableArray *subFolders; // @synthesize subFolders=_subFolders;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isMarkFolder;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

