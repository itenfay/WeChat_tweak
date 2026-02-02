//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayNoticeContentInfo : NSObject
{
    NSString *m_nsAppName;
    unsigned int m_uiAmount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiAmount; // @synthesize m_uiAmount;
@property(retain, nonatomic) NSString *m_nsAppName; // @synthesize m_nsAppName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

