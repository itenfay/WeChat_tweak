//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAAppTaskHandlerWrapper, WAUINavigationController;

@interface WAAppTaskStackInstance : NSObject
{
    WAUINavigationController *_nav;
    WAAppTaskHandlerWrapper *_handlerWrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppTaskHandlerWrapper *handlerWrapper; // @synthesize handlerWrapper=_handlerWrapper;
@property(nonatomic) __weak WAUINavigationController *nav; // @synthesize nav=_nav;

@end

