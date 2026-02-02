//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface RecycleCardPigeon : NSObject
{
    NSString *_extra_data;
    NSNumber *_clientmsgid;
    NSNumber *_flag;
    NSString *_report_data;
    NSString *_clientmsgidStr;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithExtra_data:(id)arg1 clientmsgid:(id)arg2 flag:(id)arg3 report_data:(id)arg4 clientmsgidStr:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clientmsgidStr; // @synthesize clientmsgidStr=_clientmsgidStr;
@property(copy, nonatomic) NSString *report_data; // @synthesize report_data=_report_data;
@property(retain, nonatomic) NSNumber *flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSNumber *clientmsgid; // @synthesize clientmsgid=_clientmsgid;
@property(copy, nonatomic) NSString *extra_data; // @synthesize extra_data=_extra_data;
- (id)toList;

@end

