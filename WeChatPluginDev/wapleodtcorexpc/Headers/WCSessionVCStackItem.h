//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSessionVCStackItem
{
    NSString *_pageName;
    unsigned long long _hashCode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long hashCode; // @synthesize hashCode=_hashCode;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (_Bool)isEqual:(id)arg1 hashCode:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)toString;

@end

