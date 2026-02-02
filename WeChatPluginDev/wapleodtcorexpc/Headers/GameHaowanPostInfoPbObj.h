//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSString;

@interface GameHaowanPostInfoPbObj
{
    NSArray *_mediaList;
    NSData *_continueData;
}

+ (void)initialize;
+ (void)PBArrayAdd_isBroken;
+ (void)PBArrayAdd_continueData;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_extra;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_postType;
+ (void)PBArrayAdd_postId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *continueData; // @synthesize continueData=_continueData;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

