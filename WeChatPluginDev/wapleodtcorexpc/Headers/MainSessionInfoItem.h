//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMSessionInfo, NSString;

@interface MainSessionInfoItem : NSObject
{
    _Bool _showAsRedDot;
    unsigned int _mainUnReadCount;
    unsigned int _mainMuteUnReadCount;
    unsigned int _mainAtMeCount;
    unsigned int _mainAtAllCount;
    MMSessionInfo *_mainSession;
}

+ (void)initialize;
+ (void)PBArrayAdd_mainAtAllCount;
+ (void)PBArrayAdd_mainAtMeCount;
+ (void)PBArrayAdd_mainMuteUnReadCount;
+ (void)PBArrayAdd_showAsRedDot;
+ (void)PBArrayAdd_mainUnReadCount;
+ (void)PBArrayAdd_mainSession;
- (void).cxx_destruct;
@property(nonatomic) unsigned int mainAtAllCount; // @synthesize mainAtAllCount=_mainAtAllCount;
@property(nonatomic) unsigned int mainAtMeCount; // @synthesize mainAtMeCount=_mainAtMeCount;
@property(nonatomic) unsigned int mainMuteUnReadCount; // @synthesize mainMuteUnReadCount=_mainMuteUnReadCount;
@property(nonatomic) _Bool showAsRedDot; // @synthesize showAsRedDot=_showAsRedDot;
@property(nonatomic) unsigned int mainUnReadCount; // @synthesize mainUnReadCount=_mainUnReadCount;
@property(retain, nonatomic) MMSessionInfo *mainSession; // @synthesize mainSession=_mainSession;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

