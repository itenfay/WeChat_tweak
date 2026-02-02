//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TextStateHistoryDay : NSObject
{
    unsigned long long _year;
    unsigned long long _month;
    unsigned long long _day;
    NSMutableArray *_privateInfoList;
}

+ (id)identifierFromYear:(unsigned long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *privateInfoList; // @synthesize privateInfoList=_privateInfoList;
@property(nonatomic) unsigned long long day; // @synthesize day=_day;
@property(nonatomic) unsigned long long month; // @synthesize month=_month;
@property(nonatomic) unsigned long long year; // @synthesize year=_year;
- (id)identifier;
- (void)removeInfo:(id)arg1;
- (void)insertInfoAtEnd:(id)arg1;
- (void)insertInfoAtBegin:(id)arg1;
- (id)infoList;
- (id)initWithYear:(unsigned long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3;

@end

