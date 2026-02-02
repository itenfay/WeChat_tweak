//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QBBeaconPersistObject
{
    long long dbid;
    long long encLength;
    long long md5;
    long long time;
    int priority;
    int type;
    int dcount;
}

@property(nonatomic) long long md5; // @synthesize md5;
@property(nonatomic) int dcount; // @synthesize dcount;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) long long time; // @synthesize time;
@property(nonatomic) int priority; // @synthesize priority;
@property(nonatomic) long long encLength; // @synthesize encLength;
@property(nonatomic) long long dbid; // @synthesize dbid;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

