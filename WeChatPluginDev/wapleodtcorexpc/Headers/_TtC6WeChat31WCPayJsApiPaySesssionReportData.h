//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat31WCPayJsApiPaySesssionReportData : NSObject
{
    MISSING_TYPE *chatType;
    MISSING_TYPE *sendType;
    MISSING_TYPE *sessionType;
    MISSING_TYPE *sessionName;
    MISSING_TYPE *timelineObjId;
    MISSING_TYPE *msgSvrId;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithFinderData:(id)arg1;
- (id)initWithTopicReportItem:(id)arg1;
- (id)initWithGetUrlInfoSession:(id)arg1 msgUserName:(id)arg2 msgSvrId:(id)arg3;
- (id)initWithTalker:(id)arg1 sender:(id)arg2;
- (id)initWithTimelineSender:(id)arg1;
@property(nonatomic, readonly) NSString *sessionTypeValue;
@property(nonatomic, readonly) NSString *sendTypeValue;
@property(nonatomic, readonly) NSString *chatTypeValue;
@property(nonatomic, readonly) NSString *msgSvrId;
@property(nonatomic, readonly) NSString *timelineObjId;
@property(nonatomic, readonly) NSString *sessionName;

@end

