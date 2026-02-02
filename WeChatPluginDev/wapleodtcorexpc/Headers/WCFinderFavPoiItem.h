//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo_LbsLifeCardStyle, FinderLocation, NSString, WCFinderJumperPoiParams;

@interface WCFinderFavPoiItem : NSObject
{
    FinderJumpInfo_LbsLifeCardStyle *_style;
    NSString *_paramsJson;
    WCFinderJumperPoiParams *_poiJumpParams;
    FinderLocation *_location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) WCFinderJumperPoiParams *poiJumpParams; // @synthesize poiJumpParams=_poiJumpParams;
@property(retain, nonatomic) NSString *paramsJson; // @synthesize paramsJson=_paramsJson;
@property(retain, nonatomic) FinderJumpInfo_LbsLifeCardStyle *style; // @synthesize style=_style;
- (id)initWithFavPOIItem:(id)arg1;

@end

