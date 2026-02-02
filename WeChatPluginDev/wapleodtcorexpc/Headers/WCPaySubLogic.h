//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCPaySubLogicDelegate;

@interface WCPaySubLogic : NSObject
{
    id <WCPaySubLogicDelegate> m_baseDelegate;
}

- (void).cxx_destruct;
- (id)initWithBaseDelegate:(id)arg1;

@end

