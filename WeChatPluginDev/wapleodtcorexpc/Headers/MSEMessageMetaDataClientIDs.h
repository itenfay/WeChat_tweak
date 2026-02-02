//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MSEMessageMetaDataClientIDs : NSObject
{
    NSArray *_imgClientIDs;
    NSString *_videoClientID;
    NSString *_appmsgClientID;
}

+ (void)initialize;
+ (void)PBArrayAdd_appmsgClientID;
+ (void)PBArrayAdd_videoClientID;
+ (void)PBArrayAdd_imgClientIDs;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appmsgClientID; // @synthesize appmsgClientID=_appmsgClientID;
@property(retain, nonatomic) NSString *videoClientID; // @synthesize videoClientID=_videoClientID;
@property(retain, nonatomic) NSArray *imgClientIDs; // @synthesize imgClientIDs=_imgClientIDs;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

