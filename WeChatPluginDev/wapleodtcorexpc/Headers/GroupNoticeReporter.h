//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GroupNoticeReporter : NSObject
{
    unsigned int _action;
    unsigned int _role;
    unsigned int _memberCount;
    unsigned int _type;
    NSString *_chatName;
    NSString *_noticeId;
}

+ (void)report_22613:(id)arg1;
+ (void)reportAction:(unsigned int)arg1;
+ (id)reporter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int memberCount; // @synthesize memberCount=_memberCount;
@property(nonatomic) unsigned int role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
- (void)report;

@end

