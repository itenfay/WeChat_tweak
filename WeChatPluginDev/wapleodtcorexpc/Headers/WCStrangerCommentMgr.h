//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MyWCDB;

@interface WCStrangerCommentMgr : NSObject
{
    MyWCDB *m_database;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MyWCDB *m_database; // @synthesize m_database;
- (void)getStrangerCommentForDataItem:(id)arg1 partner:(id)arg2;
- (void)addComment:(id)arg1 toItem:(id)arg2;
- (void)dealloc;

@end

