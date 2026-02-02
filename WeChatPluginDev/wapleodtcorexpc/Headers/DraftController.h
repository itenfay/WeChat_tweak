//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface DraftController : NSObject
{
    NSMutableArray *m_arrReceiver;
    NSMutableArray *m_arrCc;
    NSMutableArray *m_arrBcc;
    NSString *m_topic;
    NSString *m_content;
    NSArray *m_storedMailAttachments;
}

+ (void)deleteAllDraft;
+ (void)deleteDraft:(id)arg1;
+ (_Bool)writeAllDraft:(id)arg1 mailID:(id)arg2;
+ (id)readAllDraft:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_storedMailAttachments; // @synthesize m_storedMailAttachments;
@property(retain, nonatomic) NSString *m_content; // @synthesize m_content;
@property(retain, nonatomic) NSString *m_topic; // @synthesize m_topic;
@property(retain, nonatomic) NSMutableArray *m_arrCc; // @synthesize m_arrCc;
@property(retain, nonatomic) NSMutableArray *m_arrBcc; // @synthesize m_arrBcc;
@property(retain, nonatomic) NSMutableArray *m_arrReceiver; // @synthesize m_arrReceiver;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

