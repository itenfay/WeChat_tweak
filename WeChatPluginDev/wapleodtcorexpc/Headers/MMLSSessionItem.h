//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLSSessionItem : NSObject
{
    unsigned int _msgCount;
    unsigned int _msgOldestTime;
    unsigned int _msgNewestTime;
    NSString *session;
    NSString *userName;
    unsigned long long fileSize;
    long long _msgBeginTime;
    long long _msgEndTime;
}

+ (_Bool)sessionItemCompareItem:(id)arg1 withItem:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int msgNewestTime; // @synthesize msgNewestTime=_msgNewestTime;
@property(nonatomic) unsigned int msgOldestTime; // @synthesize msgOldestTime=_msgOldestTime;
@property(nonatomic) long long msgEndTime; // @synthesize msgEndTime=_msgEndTime;
@property(nonatomic) long long msgBeginTime; // @synthesize msgBeginTime=_msgBeginTime;
@property(nonatomic) unsigned int msgCount; // @synthesize msgCount=_msgCount;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *session; // @synthesize session;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

