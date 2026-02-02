//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesOperationInfo : NSObject
{
    _Bool m_bOpEnable;
    NSString *m_nsOpName;
    NSString *m_nsOpType;
    NSString *m_nsOpContent;
    NSString *m_nsOpShowType;
    id m_inSender;
    unsigned int m_uiOsskey;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiOsskey; // @synthesize m_uiOsskey;
@property(nonatomic) __weak id m_inSender; // @synthesize m_inSender;
@property(retain, nonatomic) NSString *m_nsOpShowType; // @synthesize m_nsOpShowType;
@property(retain, nonatomic) NSString *m_nsOpContent; // @synthesize m_nsOpContent;
@property(retain, nonatomic) NSString *m_nsOpType; // @synthesize m_nsOpType;
@property(retain, nonatomic) NSString *m_nsOpName; // @synthesize m_nsOpName;
@property(nonatomic) _Bool m_bOpEnable; // @synthesize m_bOpEnable;

@end

