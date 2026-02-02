//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandResortConfig : NSObject
{
    _Bool _useNewPlan;
    _Bool _needCheckUnReadCount;
    _Bool _checkGroupIdChange;
    _Bool _retrieveInvalidExposedMsg;
    unsigned int _reqIntervalSec;
    unsigned int _beginTime;
    unsigned int _unexposedThreshold;
    unsigned int _unreadThreshold;
    unsigned int _reqMsgCountLimit;
    unsigned int _extraRecMsgCount;
}

@property(nonatomic) _Bool retrieveInvalidExposedMsg; // @synthesize retrieveInvalidExposedMsg=_retrieveInvalidExposedMsg;
@property(nonatomic) _Bool checkGroupIdChange; // @synthesize checkGroupIdChange=_checkGroupIdChange;
@property(nonatomic) unsigned int extraRecMsgCount; // @synthesize extraRecMsgCount=_extraRecMsgCount;
@property(nonatomic) unsigned int reqMsgCountLimit; // @synthesize reqMsgCountLimit=_reqMsgCountLimit;
@property(nonatomic) unsigned int unreadThreshold; // @synthesize unreadThreshold=_unreadThreshold;
@property(nonatomic) unsigned int unexposedThreshold; // @synthesize unexposedThreshold=_unexposedThreshold;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) unsigned int reqIntervalSec; // @synthesize reqIntervalSec=_reqIntervalSec;
@property(nonatomic) _Bool needCheckUnReadCount; // @synthesize needCheckUnReadCount=_needCheckUnReadCount;
@property(nonatomic) _Bool useNewPlan; // @synthesize useNewPlan=_useNewPlan;
- (id)description;

@end

