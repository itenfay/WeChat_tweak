//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MsgImgSearchPhashInfo
{
    _Bool _hasShowOnce;
    unsigned int _expiredTime;
    NSString *_phashStr;
    NSString *_bubbleTitle;
}

+ (void)initialize;
+ (void)PBArrayAdd_hasShowOnce;
+ (void)PBArrayAdd_bubbleTitle;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_phashStr;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasShowOnce; // @synthesize hasShowOnce=_hasShowOnce;
@property(copy, nonatomic) NSString *bubbleTitle; // @synthesize bubbleTitle=_bubbleTitle;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime=_expiredTime;
@property(copy, nonatomic) NSString *phashStr; // @synthesize phashStr=_phashStr;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

