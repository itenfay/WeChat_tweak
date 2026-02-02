//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface UserOpInfo : NSObject
{
    unsigned int module;
    unsigned long long timestamp;
    unsigned int seq;
    int currentPage;
    int opType;
    NSString *dataflowSourceInfo;
    NSString *dataflowResultInfo;
    NSString *statusDesc1;
    NSString *statusDesc2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *statusDesc2; // @synthesize statusDesc2;
@property(retain, nonatomic) NSString *statusDesc1; // @synthesize statusDesc1;
@property(retain, nonatomic) NSString *dataflowResultInfo; // @synthesize dataflowResultInfo;
@property(retain, nonatomic) NSString *dataflowSourceInfo; // @synthesize dataflowSourceInfo;
@property(nonatomic) int opType; // @synthesize opType;
@property(nonatomic) int currentPage; // @synthesize currentPage;
@property(nonatomic) unsigned int seq; // @synthesize seq;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp;
@property(nonatomic) unsigned int module; // @synthesize module;
- (void)resetStatus;
- (id)genStatInfo;
- (id)init;

@end

