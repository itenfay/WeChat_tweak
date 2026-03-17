//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface __ThreadWarp : NSObject
{
    id m_target;
    SEL m_sel;
    id m_arg;
}

@property(retain, nonatomic) id m_arg; // @synthesize m_arg;
@property(nonatomic) SEL m_sel; // @synthesize m_sel;
@property(retain, nonatomic) id m_target; // @synthesize m_target;
- (void)Run;
- (void)dealloc;
- (id)init;

@end

