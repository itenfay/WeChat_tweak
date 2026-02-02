//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSessionFlowSessionMergeInfo
{
    NSString *_sid;
    unsigned long long _count;
    unsigned long long _interval;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getSessionMergeAttrDictionary;
- (id)toString;

@end

