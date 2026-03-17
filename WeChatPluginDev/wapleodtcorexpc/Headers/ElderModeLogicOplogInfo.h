//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ElderModeLogicOplogInfo : NSObject
{
    _Bool _targetStatus;
    unsigned int _eventID;
}

+ (id)oplogInfoWithEventID:(unsigned int)arg1 targetStatus:(_Bool)arg2;
@property(nonatomic) _Bool targetStatus; // @synthesize targetStatus=_targetStatus;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (void)handleOplogSuccess;
- (void)handleOplogFail;

@end

