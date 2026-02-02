//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QLocationMarkerWrapper : NSObject
{
    int _markerID;
    NSString *_markerInstruction;
    NSString *_compassInstruction;
    NSString *_directionEastInstruction;
    NSString *_directionWestInstruction;
    NSString *_directionNorthInstruction;
    NSString *_directionSouthInstruction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *directionSouthInstruction; // @synthesize directionSouthInstruction=_directionSouthInstruction;
@property(retain, nonatomic) NSString *directionNorthInstruction; // @synthesize directionNorthInstruction=_directionNorthInstruction;
@property(retain, nonatomic) NSString *directionWestInstruction; // @synthesize directionWestInstruction=_directionWestInstruction;
@property(retain, nonatomic) NSString *directionEastInstruction; // @synthesize directionEastInstruction=_directionEastInstruction;
@property(retain, nonatomic) NSString *compassInstruction; // @synthesize compassInstruction=_compassInstruction;
@property(retain, nonatomic) NSString *markerInstruction; // @synthesize markerInstruction=_markerInstruction;
@property(nonatomic) int markerID; // @synthesize markerID=_markerID;

@end

