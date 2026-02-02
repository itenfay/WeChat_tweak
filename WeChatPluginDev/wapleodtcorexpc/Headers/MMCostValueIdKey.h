//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCostValueIdKey : NSObject
{
    unsigned long long m_uID;
    unsigned long long m_uTotalCostValueKey;
    unsigned long long m_uTotalCountKey;
    NSString *m_nsDes;
}

+ (id)constructOneItemWithId:(unsigned long long)arg1 withTotalCostValueKey:(unsigned long long)arg2 withTotalCountKey:(unsigned long long)arg3 withDes:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsDes; // @synthesize m_nsDes;
@property(nonatomic) unsigned long long m_uTotalCountKey; // @synthesize m_uTotalCountKey;
@property(nonatomic) unsigned long long m_uTotalCostValueKey; // @synthesize m_uTotalCostValueKey;
@property(nonatomic) unsigned long long m_uID; // @synthesize m_uID;
- (id)init;

@end

