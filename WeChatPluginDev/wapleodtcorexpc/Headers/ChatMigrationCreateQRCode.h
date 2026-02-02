//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol ChatMigrationCreateQRCodeDelegate;

@interface ChatMigrationCreateQRCode
{
    id <ChatMigrationCreateQRCodeDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ChatMigrationCreateQRCodeDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getQRCodeOfflineWithIP:(id)arg1 Port:(unsigned short)arg2 WifiName:(id)arg3 PcName:(id)arg4 PcacctName:(id)arg5 TotalSize:(unsigned long long)arg6 Ticket:(id)arg7 AESKey:(id)arg8 Uin:(unsigned int)arg9;
- (void)getQRCodeWithIP:(id)arg1 Port:(unsigned short)arg2 WifiName:(id)arg3 PcName:(id)arg4 PcacctName:(id)arg5 TotalSize:(unsigned long long)arg6;
- (void)dealloc;
- (id)init;

@end

