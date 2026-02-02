//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MPPageFriendInfo
{
    unsigned int _friendReadCount;
    NSString *_friendReadCountStr;
}

+ (void)initialize;
+ (void)PBArrayAdd_friendReadCount;
+ (void)PBArrayAdd_friendReadCountStr;
- (void).cxx_destruct;
@property(nonatomic) unsigned int friendReadCount; // @synthesize friendReadCount=_friendReadCount;
@property(copy, nonatomic) NSString *friendReadCountStr; // @synthesize friendReadCountStr=_friendReadCountStr;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

