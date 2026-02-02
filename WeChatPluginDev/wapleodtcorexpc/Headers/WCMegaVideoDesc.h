//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCMegaVideoExtendedReading, WCMegaVideoLocation;

@interface WCMegaVideoDesc : NSObject
{
    NSString *_videoDescription;
    NSMutableArray *_mediaList;
    unsigned long long _mediaType;
    NSString *_mixedBuffer;
    WCMegaVideoLocation *_location;
    WCMegaVideoExtendedReading *_extReading;
    WCMegaVideoLocation *_feedLocation;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_feedLocation;
+ (void)PBArrayAdd_extReading;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_mixedBuffer;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_videoDescription;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMegaVideoLocation *feedLocation; // @synthesize feedLocation=_feedLocation;
@property(retain, nonatomic) WCMegaVideoExtendedReading *extReading; // @synthesize extReading=_extReading;
@property(retain, nonatomic) WCMegaVideoLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *mixedBuffer; // @synthesize mixedBuffer=_mixedBuffer;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
@property(copy, nonatomic) NSString *videoDescription; // @synthesize videoDescription=_videoDescription;
@property(readonly, copy) NSString *description;
- (id)genMegaVideoDesc;
- (id)initWithMegaVideoDesc:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

