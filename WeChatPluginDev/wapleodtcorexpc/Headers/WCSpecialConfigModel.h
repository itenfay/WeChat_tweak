//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCSpecialConfigModel : NSObject
{
    unsigned int _logID;
    NSString *_pageName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int logID; // @synthesize logID=_logID;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (id)toString;
- (id)initPageName:(id)arg1 withLogID:(unsigned int)arg2;

@end

