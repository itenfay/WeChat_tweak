//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingPlayInfoOpLogTask : NSObject
{
    _Bool _isOn;
    unsigned int _eventId;
}

+ (id)oplogInfoWithEventID:(unsigned int)arg1 targetStatus:(_Bool)arg2;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
- (void)handleOplogSuccess;
- (void)handleOplogFail;

@end

