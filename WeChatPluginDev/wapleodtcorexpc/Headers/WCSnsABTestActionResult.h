//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCSnsABTestActionResult : NSObject
{
    unsigned int experType;
    NSString *dataItemId;
    NSMutableArray *arrTipActionResult;
    unsigned int startTime;
    unsigned int endTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *dataItemId; // @synthesize dataItemId;
@property(nonatomic) unsigned int experType; // @synthesize experType;
- (void)addTipActionResult:(id)arg1;
- (void)tryAddTimeStamp:(_Bool)arg1 endTime:(_Bool)arg2;
- (_Bool)hasActionResult;
- (id)genActionResult;
- (void)resetResult;
- (id)init;

@end

