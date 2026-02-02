//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSessionPagePathBusinessParam
{
    NSString *_pagePathId;
    NSString *_value;
    NSString *_dataPath;
    NSString *_businessId;
    unsigned long long _action;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *pagePathId; // @synthesize pagePathId=_pagePathId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAttrDictionary;
- (id)toString;

@end

