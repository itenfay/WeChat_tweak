//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCPayCreditPayQuestionStruct;

@interface WCPayCreditPayQuestionNode : NSObject
{
    _Bool m_bSelect;
    _Bool m_bTwoLevel;
    WCPayCreditPayQuestionStruct *m_oQuestionNode;
    WCPayCreditPayQuestionStruct *m_oNextQuestionNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayCreditPayQuestionStruct *m_oNextQuestionNode; // @synthesize m_oNextQuestionNode;
@property(retain, nonatomic) WCPayCreditPayQuestionStruct *m_oQuestionNode; // @synthesize m_oQuestionNode;
@property(nonatomic) _Bool m_bTwoLevel; // @synthesize m_bTwoLevel;
@property(nonatomic) _Bool m_bSelect; // @synthesize m_bSelect;

@end

