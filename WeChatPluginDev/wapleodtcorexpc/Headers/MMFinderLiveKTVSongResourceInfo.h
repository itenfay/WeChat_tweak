//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveKTVSongResourceInfo : NSObject
{
    int _songQuality;
    int _accompanyQuality;
    NSMutableArray *_resources;
}

+ (void)buildSongResourceInfo:(id)arg1 withResourceInfo:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int accompanyQuality; // @synthesize accompanyQuality=_accompanyQuality;
@property(nonatomic) int songQuality; // @synthesize songQuality=_songQuality;
@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
- (id)description;

@end

