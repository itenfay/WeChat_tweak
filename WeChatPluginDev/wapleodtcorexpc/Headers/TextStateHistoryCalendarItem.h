//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TextStateHistoryCalendarItem : NSObject
{
    unsigned long long _day;
    NSMutableArray *_privateInfoList;
}

+ (id)identifierFromDay:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *privateInfoList; // @synthesize privateInfoList=_privateInfoList;
@property(nonatomic) unsigned long long day; // @synthesize day=_day;
- (id)infoList;
- (void)removeInfo:(id)arg1;
- (void)appendInfo:(id)arg1;
- (void)insertInfoAtBegin:(id)arg1;
- (id)initWithDay:(unsigned long long)arg1;
- (id)identifier;

@end

