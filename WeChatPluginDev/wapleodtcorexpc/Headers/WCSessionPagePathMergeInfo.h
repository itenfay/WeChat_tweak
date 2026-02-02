//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSessionPagePathMergeInfo
{
    unsigned int _count;
    NSString *_sid;
    NSString *_pagePathId;
    unsigned long long _interval;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *pagePathId; // @synthesize pagePathId=_pagePathId;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAttrDictionary;
- (id)toString;

@end

