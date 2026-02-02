//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCSessionPagePathInfo
{
    NSString *_pageName;
    unsigned long long _enterTimestampMs;
    unsigned long long _quitTimestampMs;
    unsigned long long _interval;
    NSMutableArray *_businessParams;
    NSMutableArray *_viewOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *viewOperation; // @synthesize viewOperation=_viewOperation;
@property(retain, nonatomic) NSMutableArray *businessParams; // @synthesize businessParams=_businessParams;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long quitTimestampMs; // @synthesize quitTimestampMs=_quitTimestampMs;
@property(nonatomic) unsigned long long enterTimestampMs; // @synthesize enterTimestampMs=_enterTimestampMs;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAttrDictionary;
- (id)toString;
- (id)init;

@end

