//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveFlowActionBase;

@interface MMLiveFlowDownstreamActionDescriptor : NSObject
{
    CDUnknownBlockType _actionFactory;
}

+ (id)createWithActionFactory:(CDUnknownBlockType)arg1;
+ (id)createWithActionInstance:(id)arg1;
+ (id)createWithActionClass:(Class)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionFactory; // @synthesize actionFactory=_actionFactory;
@property(readonly, nonatomic) MMLiveFlowActionBase *action;

@end

