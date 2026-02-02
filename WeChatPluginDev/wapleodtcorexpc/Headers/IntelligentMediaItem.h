//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface IntelligentMediaItem
{
    unsigned int _mesLocalID;
    long long _mesSvrID;
    NSString *_userName;
    NSString *_mediaFilePath;
}

+ (void)initialize;
+ (void)PBArrayAdd_mediaFilePath;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_mesSvrID;
+ (void)PBArrayAdd_mesLocalID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mediaFilePath; // @synthesize mediaFilePath=_mediaFilePath;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long mesSvrID; // @synthesize mesSvrID=_mesSvrID;
@property(nonatomic) unsigned int mesLocalID; // @synthesize mesLocalID=_mesLocalID;
- (void)copyFieldFromMediaItem:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

