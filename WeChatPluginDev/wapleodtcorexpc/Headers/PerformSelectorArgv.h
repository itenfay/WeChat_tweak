//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMContext;

@interface PerformSelectorArgv : NSObject
{
    SEL m_selector;
    id m_argument;
    MMContext *m_context;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) MMContext *context;
@property(readonly, nonatomic) id argument;
@property(readonly, nonatomic) SEL selector;
- (id)initWithSelector:(SEL)arg1 argument:(id)arg2;

@end

