//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5MigrationInfo : NSObject
{
    unsigned int _start;
    unsigned int _end;
    unsigned int _msgCount;
    unsigned int _pageCount;
    unsigned int _favMsgCount;
    unsigned int _sessionCount;
}

+ (void)initialize;
+ (void)PBArrayAdd_sessionCount;
+ (void)PBArrayAdd_favMsgCount;
+ (void)PBArrayAdd_pageCount;
+ (void)PBArrayAdd_msgCount;
+ (void)PBArrayAdd_end;
+ (void)PBArrayAdd_start;
@property(nonatomic) unsigned int sessionCount; // @synthesize sessionCount=_sessionCount;
@property(nonatomic) unsigned int favMsgCount; // @synthesize favMsgCount=_favMsgCount;
@property(nonatomic) unsigned int pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) unsigned int msgCount; // @synthesize msgCount=_msgCount;
@property(nonatomic) unsigned int end; // @synthesize end=_end;
@property(nonatomic) unsigned int start; // @synthesize start=_start;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

