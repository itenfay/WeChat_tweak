//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SessionReportMsgInfo : NSObject
{
    unsigned int _msgtime;
    int _re_read;
    long long _msgid;
}

+ (void)initialize;
+ (void)PBArrayAdd_re_read;
+ (void)PBArrayAdd_msgtime;
+ (void)PBArrayAdd_msgid;
@property(nonatomic) int re_read; // @synthesize re_read=_re_read;
@property(nonatomic) unsigned int msgtime; // @synthesize msgtime=_msgtime;
@property(nonatomic) long long msgid; // @synthesize msgid=_msgid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

