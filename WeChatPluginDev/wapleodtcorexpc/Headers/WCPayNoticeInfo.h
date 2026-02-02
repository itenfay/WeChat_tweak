//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayNoticeInfo : NSObject
{
    unsigned int m_uiNoticeID;
    NSString *m_nsTitle;
    NSString *m_nsHeadTips;
    NSArray *m_arrContent;
    unsigned long long m_uiAmountCount;
    NSString *m_nsFootTip;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_uiAmountCount; // @synthesize m_uiAmountCount;
@property(nonatomic) unsigned int m_uiNoticeID; // @synthesize m_uiNoticeID;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) NSString *m_nsHeadTips; // @synthesize m_nsHeadTips;
@property(retain, nonatomic) NSArray *m_arrContent; // @synthesize m_arrContent;
@property(retain, nonatomic) NSString *m_nsFootTip; // @synthesize m_nsFootTip;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

