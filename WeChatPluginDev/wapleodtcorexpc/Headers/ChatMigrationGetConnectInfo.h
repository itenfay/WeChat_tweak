//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol ChatMigrationGetConnectInfoDelegate;

@interface ChatMigrationGetConnectInfo : NSObject
{
    id <ChatMigrationGetConnectInfoDelegate> m_delegate;
}

@property(nonatomic) __weak id <ChatMigrationGetConnectInfoDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getConnectInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

