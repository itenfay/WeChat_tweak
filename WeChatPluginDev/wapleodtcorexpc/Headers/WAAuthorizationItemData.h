//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WAAuthorizationItemData : NSObject
{
    unsigned int _timestamp;
    NSString *_weappUsrName;
    NSMutableArray *_scopeList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSMutableArray *scopeList; // @synthesize scopeList=_scopeList;
@property(copy, nonatomic) NSString *weappUsrName; // @synthesize weappUsrName=_weappUsrName;

@end

