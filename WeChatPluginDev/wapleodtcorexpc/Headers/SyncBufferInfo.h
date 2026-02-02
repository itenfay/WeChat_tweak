//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SyncBufferInfo : NSObject
{
    NSData *m_dtSyncBuffer;
    NSString *m_nsUserName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(readonly, nonatomic) NSData *m_dtSyncBuffer; // @synthesize m_dtSyncBuffer;
- (id)initWithUserName:(id)arg1 SyncBuffer:(id)arg2;

@end

