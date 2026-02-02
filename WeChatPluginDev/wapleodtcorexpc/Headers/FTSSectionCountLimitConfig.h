//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSSectionCountLimitConfig : NSObject
{
    unsigned long long _maxDisplayItemsCount;
    NSString *_titleForMore;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *titleForMore; // @synthesize titleForMore=_titleForMore;
@property(nonatomic) unsigned long long maxDisplayItemsCount; // @synthesize maxDisplayItemsCount=_maxDisplayItemsCount;
- (id)init;

@end

