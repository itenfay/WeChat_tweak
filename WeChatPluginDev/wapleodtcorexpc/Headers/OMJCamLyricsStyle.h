//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJSpatialInfo;

@interface OMJCamLyricsStyle : NSObject
{
    NSString *_lyricsStyleID;
    OMJSpatialInfo *_spatialInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMJSpatialInfo *spatialInfo; // @synthesize spatialInfo=_spatialInfo;
@property(retain, nonatomic) NSString *lyricsStyleID; // @synthesize lyricsStyleID=_lyricsStyleID;
- (id)description;
- (id)initWithLyricsStyleID:(id)arg1 spatialInfo:(id)arg2;

@end

