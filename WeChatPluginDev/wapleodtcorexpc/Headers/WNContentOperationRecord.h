//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, WNContentStorage;

@interface WNContentOperationRecord : NSObject
{
    NSDate *_operationTime;
    WNContentStorage *_preContent;
    NSMutableArray *_preSessions;
    WNContentStorage *_nextContent;
    NSMutableArray *_nextSessions;
    struct _NSRange _preRange;
    struct _NSRange _nextRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *nextSessions; // @synthesize nextSessions=_nextSessions;
@property(nonatomic) struct _NSRange nextRange; // @synthesize nextRange=_nextRange;
@property(retain, nonatomic) WNContentStorage *nextContent; // @synthesize nextContent=_nextContent;
@property(retain, nonatomic) NSMutableArray *preSessions; // @synthesize preSessions=_preSessions;
@property(nonatomic) struct _NSRange preRange; // @synthesize preRange=_preRange;
@property(retain, nonatomic) WNContentStorage *preContent; // @synthesize preContent=_preContent;
@property(retain, nonatomic) NSDate *operationTime; // @synthesize operationTime=_operationTime;

@end

