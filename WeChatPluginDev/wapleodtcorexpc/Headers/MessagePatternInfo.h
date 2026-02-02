//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MessagePatternInfo : NSObject
{
    unsigned int _m_uiLocalID;
    NSString *_m_nsPattern;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_nsPattern;
+ (void)PBArrayAdd_m_uiLocalID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern=_m_nsPattern;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID=_m_uiLocalID;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

