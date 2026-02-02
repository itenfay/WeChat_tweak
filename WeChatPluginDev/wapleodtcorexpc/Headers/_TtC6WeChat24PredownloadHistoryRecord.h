//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString, _TtC6WeChat17WCDBIntegerNumber;

@interface _TtC6WeChat24PredownloadHistoryRecord : NSObject
{
    MISSING_TYPE *date;
    MISSING_TYPE *size;
    MISSING_TYPE *serverPriority;
    MISSING_TYPE *clientPriority;
    MISSING_TYPE *downloadState;
    MISSING_TYPE *downloadRetries;
    MISSING_TYPE *sizeThatStartPredownload;
    MISSING_TYPE *skipQuota;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic) _Bool skipQuota; // @synthesize skipQuota;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *sizeThatStartPredownload;
@property(nonatomic) long long downloadRetries; // @synthesize downloadRetries;
@property(nonatomic) long long downloadState; // @synthesize downloadState;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *clientPriority;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *serverPriority;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *size;
@property(nonatomic, copy) NSDate *date;

@end

