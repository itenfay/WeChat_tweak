//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface RedPointInfo : NSObject
{
    unsigned int _redPointID;
    unsigned int _mustClearInSameTime;
    unsigned int _recieveTime;
    NSString *_redPointPath;
    NSString *_extInfoString;
}

+ (void)initialize;
+ (void)PBArrayAdd_extInfoString;
+ (void)PBArrayAdd_recieveTime;
+ (void)PBArrayAdd_mustClearInSameTime;
+ (void)PBArrayAdd_redPointID;
+ (void)PBArrayAdd_redPointPath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extInfoString; // @synthesize extInfoString=_extInfoString;
@property(nonatomic) unsigned int recieveTime; // @synthesize recieveTime=_recieveTime;
@property(nonatomic) unsigned int mustClearInSameTime; // @synthesize mustClearInSameTime=_mustClearInSameTime;
@property(nonatomic) unsigned int redPointID; // @synthesize redPointID=_redPointID;
@property(retain, nonatomic) NSString *redPointPath; // @synthesize redPointPath=_redPointPath;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

