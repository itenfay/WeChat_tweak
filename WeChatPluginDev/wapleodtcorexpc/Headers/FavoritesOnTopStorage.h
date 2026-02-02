//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FavoritesOnTopStorage : NSObject
{
    _Bool _bEditable;
    unsigned int _mesLocalID;
    unsigned int _favLocalId;
    unsigned int _lastReportTime;
    NSString *_chatUser;
    NSString *_localDataId;
    NSString *_timeLineId;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastReportTime;
+ (void)PBArrayAdd_bEditable;
+ (void)PBArrayAdd_timeLineId;
+ (void)PBArrayAdd_localDataId;
+ (void)PBArrayAdd_favLocalId;
+ (void)PBArrayAdd_mesLocalID;
+ (void)PBArrayAdd_chatUser;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastReportTime; // @synthesize lastReportTime=_lastReportTime;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable=_bEditable;
@property(retain, nonatomic) NSString *timeLineId; // @synthesize timeLineId=_timeLineId;
@property(retain, nonatomic) NSString *localDataId; // @synthesize localDataId=_localDataId;
@property(nonatomic) unsigned int favLocalId; // @synthesize favLocalId=_favLocalId;
@property(nonatomic) unsigned int mesLocalID; // @synthesize mesLocalID=_mesLocalID;
@property(retain, nonatomic) NSString *chatUser; // @synthesize chatUser=_chatUser;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

