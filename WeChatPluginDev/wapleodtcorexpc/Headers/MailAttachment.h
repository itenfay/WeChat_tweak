//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MailAttachment : NSObject
{
    NSData *m_dtData;
    NSString *m_nsDataID;
    NSString *m_nsName;
    unsigned long long m_uiSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_uiSize; // @synthesize m_uiSize;
@property(retain, nonatomic) NSString *m_nsName; // @synthesize m_nsName;
@property(retain, nonatomic) NSString *m_nsDataID; // @synthesize m_nsDataID;
@property(retain, nonatomic) NSData *m_dtData; // @synthesize m_dtData;
- (id)init;

@end

