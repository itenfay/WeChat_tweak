//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveLikePostResult : NSObject
{
    _Bool _isAttendLottery;
    unsigned int _nextReqInterval;
    unsigned int _statusFlag;
}

@property(nonatomic) unsigned int statusFlag; // @synthesize statusFlag=_statusFlag;
@property(nonatomic) unsigned int nextReqInterval; // @synthesize nextReqInterval=_nextReqInterval;
@property(nonatomic) _Bool isAttendLottery; // @synthesize isAttendLottery=_isAttendLottery;

@end

