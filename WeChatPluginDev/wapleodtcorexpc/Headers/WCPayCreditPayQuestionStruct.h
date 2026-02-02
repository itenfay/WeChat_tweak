//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCreditPayQuestionStruct : NSObject
{
    unsigned int m_uiSelected;
    NSString *m_nsParentID;
    NSString *m_nsQuestionID;
    NSString *m_nsQuestion;
    NSString *m_nsAnswer;
    NSString *m_nsTips;
    unsigned int m_uiMaxLength;
    _Bool m_bUsed;
    _Bool m_bSelect;
    _Bool m_bTwoLevel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bUsed; // @synthesize m_bUsed;
@property(nonatomic) unsigned int m_uiMaxLength; // @synthesize m_uiMaxLength;
@property(retain, nonatomic) NSString *m_nsTips; // @synthesize m_nsTips;
@property(retain, nonatomic) NSString *m_nsAnswer; // @synthesize m_nsAnswer;
@property(retain, nonatomic) NSString *m_nsQuestion; // @synthesize m_nsQuestion;
@property(retain, nonatomic) NSString *m_nsQuestionID; // @synthesize m_nsQuestionID;
@property(retain, nonatomic) NSString *m_nsParentID; // @synthesize m_nsParentID;
@property(nonatomic) unsigned int m_uiSelected; // @synthesize m_uiSelected;
@property(nonatomic) _Bool m_bTwoLevel; // @synthesize m_bTwoLevel;
@property(nonatomic) _Bool m_bSelect; // @synthesize m_bSelect;

@end

