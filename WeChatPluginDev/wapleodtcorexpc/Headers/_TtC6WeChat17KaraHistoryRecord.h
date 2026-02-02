//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, _TtC6WeChat17WCDBIntegerNumber;

@interface _TtC6WeChat17KaraHistoryRecord : NSObject
{
    MISSING_TYPE *dateThatHappened;
    MISSING_TYPE *dateThatRecalled;
    MISSING_TYPE *hourOfTheDay;
    MISSING_TYPE *dayOfTheWeek;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *dayOfTheWeek;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *hourOfTheDay;
@property(nonatomic, copy) NSDate *dateThatRecalled;
@property(nonatomic, copy) NSDate *dateThatHappened;

@end

