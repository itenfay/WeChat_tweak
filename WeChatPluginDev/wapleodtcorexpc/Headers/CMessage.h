//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, ProtobufCGIWrap;

@interface CMessage : NSObject
{
    unsigned int m_uiMessage;
    unsigned int m_uiEventID;
    NSDictionary *m_dicMessageInfo;
    ProtobufCGIWrap *m_pbCGIWrap;
    _Bool m_bNotify;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bNotify; // @synthesize m_bNotify;
@property(retain, nonatomic) ProtobufCGIWrap *m_pbCGIWrap; // @synthesize m_pbCGIWrap;
@property(retain, nonatomic) NSDictionary *m_dicMessageInfo; // @synthesize m_dicMessageInfo;
@property(nonatomic) unsigned int m_uiEventID; // @synthesize m_uiEventID;
@property(nonatomic) unsigned int m_uiMessage; // @synthesize m_uiMessage;
- (id)init;

@end

