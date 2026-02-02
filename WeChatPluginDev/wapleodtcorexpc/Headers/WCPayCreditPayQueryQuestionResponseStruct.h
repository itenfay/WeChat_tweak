//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayCreditPayQueryQuestionResponseStruct : NSObject
{
    unsigned int m_uiQuestionNum;
    NSString *m_nsSessionKey;
    NSArray *m_arrQuestion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_arrQuestion; // @synthesize m_arrQuestion;
@property(retain, nonatomic) NSString *m_nsSessionKey; // @synthesize m_nsSessionKey;
@property(nonatomic) unsigned int m_uiQuestionNum; // @synthesize m_uiQuestionNum;

@end

