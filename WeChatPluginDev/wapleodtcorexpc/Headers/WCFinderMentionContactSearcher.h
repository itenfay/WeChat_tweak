//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface WCFinderMentionContactSearcher : NSObject
{
    NSArray *_contacts;
    long long _cursor;
    NSString *_keyword;
    NSMutableArray *_pendingTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingTask; // @synthesize pendingTask=_pendingTask;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)_queryFriendFinderContact:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)_testContact:(id)arg1 contact:(id)arg2;
- (_Bool)_doSearch:(id)arg1;
- (void)search:(CDUnknownBlockType)arg1;
- (void)search:(id)arg1 index:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (id)init;

@end

