//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLivePollingFetchTaskExecuteModel : NSObject
{
    _Bool _force;
    long long _cmdID;
    CDUnknownBlockType _reprocessAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reprocessAction; // @synthesize reprocessAction=_reprocessAction;
@property(nonatomic) _Bool force; // @synthesize force=_force;
@property(nonatomic) long long cmdID; // @synthesize cmdID=_cmdID;

@end

