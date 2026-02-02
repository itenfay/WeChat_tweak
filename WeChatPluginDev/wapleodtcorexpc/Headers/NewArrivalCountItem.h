//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewArrivalCountItem : NSObject
{
    NSString *m_nsUsrName;
    unsigned int m_uiMsgID;
    unsigned int m_uiArrivalCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiMsgID; // @synthesize m_uiMsgID;
@property(nonatomic) unsigned int m_uiArrivalCount; // @synthesize m_uiArrivalCount;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

