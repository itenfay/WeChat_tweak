//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ContactTagItem : NSObject
{
    unsigned int m_uiID;
    NSString *m_nsName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsName; // @synthesize m_nsName;
@property(nonatomic) unsigned int m_uiID; // @synthesize m_uiID;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

