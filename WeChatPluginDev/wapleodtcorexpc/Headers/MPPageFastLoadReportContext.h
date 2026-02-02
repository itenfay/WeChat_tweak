//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MPPageFastLoadReportContext : NSObject
{
    unsigned int _requestTimes;
    unsigned long long _scene;
    NSArray *_itemList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int requestTimes; // @synthesize requestTimes=_requestTimes;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)description;

@end

