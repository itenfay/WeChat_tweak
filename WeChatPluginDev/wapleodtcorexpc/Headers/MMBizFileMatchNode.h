//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface MMBizFileMatchNode : NSObject
{
    int m_fileTypeInUse;
    int m_wechatFileClass;
    unsigned long long m_matchType;
    NSString *m_text;
    NSMutableArray *m_arrBizMatchNode;
    long long m_bizType;
    NSDictionary *m_dicTextBizMatchNode;
    NSMutableArray *m_arrRegexBizMatchNode;
    long long m_pathPrefixType;
    long long m_storeTimeType;
}

+ (id)nodeWithText:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long m_storeTimeType; // @synthesize m_storeTimeType;
@property(nonatomic) long long m_pathPrefixType; // @synthesize m_pathPrefixType;
@property(retain, nonatomic) NSMutableArray *m_arrRegexBizMatchNode; // @synthesize m_arrRegexBizMatchNode;
@property(retain, nonatomic) NSDictionary *m_dicTextBizMatchNode; // @synthesize m_dicTextBizMatchNode;
@property(nonatomic) int m_wechatFileClass; // @synthesize m_wechatFileClass;
@property(nonatomic) int m_fileTypeInUse; // @synthesize m_fileTypeInUse;
@property(nonatomic) long long m_bizType; // @synthesize m_bizType;
@property(retain, nonatomic) NSMutableArray *m_arrBizMatchNode; // @synthesize m_arrBizMatchNode;
@property(retain, nonatomic) NSString *m_text; // @synthesize m_text;
@property(nonatomic) unsigned long long m_matchType; // @synthesize m_matchType;
- (void)sortBizMatchNode;
- (id)description;
- (_Bool)isMatchWithName:(id)arg1;
- (_Bool)isBizRuleConflictWith:(id)arg1;
- (_Bool)isMarkBizFileNode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

