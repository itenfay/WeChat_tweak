//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WCAdvertiseLogicMgrCgiHandlerContext : NSObject
{
    CDUnknownBlockType _appointmentCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType appointmentCompletionHandler; // @synthesize appointmentCompletionHandler=_appointmentCompletionHandler;

@end
