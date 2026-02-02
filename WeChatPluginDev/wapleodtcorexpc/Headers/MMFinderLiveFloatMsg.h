//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveFloatMsgDecorationInfo, MMFinderLiveFreeFloatMsgConfig;

@interface MMFinderLiveFloatMsg : NSObject
{
    unsigned int _msgType;
    unsigned int _usedCount;
    unsigned int _sumCount;
    unsigned int _priority;
    MMFinderLiveFloatMsgDecorationInfo *_decorationInfo;
    MMFinderLiveFreeFloatMsgConfig *_freeMsgConfig;
}

+ (unsigned int)transferPBFloatMsgTypeToFinderLiveFloatMsgType:(unsigned int)arg1;
+ (unsigned int)transferLiveFloatMsgTypeToPBFloatMsgType:(unsigned int)arg1;
+ (id)createFinderLiveFloatMsgWithPBFloatMsg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFreeFloatMsgConfig *freeMsgConfig; // @synthesize freeMsgConfig=_freeMsgConfig;
@property(retain, nonatomic) MMFinderLiveFloatMsgDecorationInfo *decorationInfo; // @synthesize decorationInfo=_decorationInfo;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned int sumCount; // @synthesize sumCount=_sumCount;
@property(nonatomic) unsigned int usedCount; // @synthesize usedCount=_usedCount;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
- (id)getDecorationItemWithType:(unsigned int)arg1;
- (id)guideWording;
- (_Bool)increaseUsedCount;
- (_Bool)hasReachUseLimit;
- (_Bool)isLimitlessFloatMsg;

@end

