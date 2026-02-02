//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MonoServiceMsgHistory : NSObject
{
    NSMutableDictionary *m_msgHistoryDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_msgHistoryDic; // @synthesize m_msgHistoryDic;
- (void)addHistoryWithMsg:(id)arg1;
- (id)msgsWithServiceType:(id)arg1 key:(id)arg2;
- (id)getHistoryMsg:(id)arg1;
- (_Bool)hasCancelMsgWithRoomID:(unsigned long long)arg1 serviceType:(id)arg2;
- (_Bool)hasHistoryMsg:(id)arg1;
- (id)init;

@end

