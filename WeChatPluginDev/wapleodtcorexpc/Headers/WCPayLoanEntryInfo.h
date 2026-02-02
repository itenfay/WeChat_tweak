//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface WCPayLoanEntryInfo : NSObject
{
    _Bool _m_isShowEntry;
    unsigned int _m_index;
    NSString *_m_loanJumpUrl;
    NSString *_m_title;
    NSString *_m_tips;
    NSNumber *_m_availableOtb;
    NSNumber *_m_isOverdue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *m_isOverdue; // @synthesize m_isOverdue=_m_isOverdue;
@property(retain, nonatomic) NSNumber *m_availableOtb; // @synthesize m_availableOtb=_m_availableOtb;
@property(retain, nonatomic) NSString *m_tips; // @synthesize m_tips=_m_tips;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title=_m_title;
@property(retain, nonatomic) NSString *m_loanJumpUrl; // @synthesize m_loanJumpUrl=_m_loanJumpUrl;
@property(nonatomic) unsigned int m_index; // @synthesize m_index=_m_index;
@property(nonatomic) _Bool m_isShowEntry; // @synthesize m_isShowEntry=_m_isShowEntry;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

