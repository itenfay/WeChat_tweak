//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ClickCommandRequestInfo : NSObject
{
    NSString *m_magic;
    NSString *m_id;
    NSString *m_key;
    long long m_type;
    long long m_actionType;
    NSString *m_status;
    NSString *m_content;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_actionType; // @synthesize m_actionType;
@property(nonatomic) long long m_type; // @synthesize m_type;
@property(retain, nonatomic) NSString *m_content; // @synthesize m_content;
@property(retain, nonatomic) NSString *m_status; // @synthesize m_status;
@property(retain, nonatomic) NSString *m_key; // @synthesize m_key;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id;
@property(retain, nonatomic) NSString *m_magic; // @synthesize m_magic;
- (id)description;
- (id)init;

@end

