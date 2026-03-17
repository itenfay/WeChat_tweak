//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface MMLivePollingFetchTaskExecuteModel : NSObject
{
    _Bool _force;
    long long _cmdID;
    CDUnknownBlockType _reprocessAction;
}

@property(copy, nonatomic) CDUnknownBlockType reprocessAction; // @synthesize reprocessAction=_reprocessAction;
@property(nonatomic) _Bool force; // @synthesize force=_force;
@property(nonatomic) long long cmdID; // @synthesize cmdID=_cmdID;

@end
