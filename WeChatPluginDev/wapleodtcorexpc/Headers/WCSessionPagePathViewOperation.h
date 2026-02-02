//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCSessionPagePathViewOperation
{
    NSString *_pageName;
    NSString *_viewId;
    unsigned long long _action;
    unsigned long long _timestampMs;
    NSMutableArray *_businessParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *businessParams; // @synthesize businessParams=_businessParams;
@property(nonatomic) unsigned long long timestampMs; // @synthesize timestampMs=_timestampMs;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAttrDictionary;
- (id)toString;
- (id)init;

@end

