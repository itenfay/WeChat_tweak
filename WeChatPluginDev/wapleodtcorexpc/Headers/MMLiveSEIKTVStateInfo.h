//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveSEIKTVSongItem;

@interface MMLiveSEIKTVStateInfo : NSObject
{
    unsigned int _version;
    MMLiveSEIKTVSongItem *_cs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveSEIKTVSongItem *cs; // @synthesize cs=_cs;
@property(nonatomic) unsigned int version; // @synthesize version=_version;

@end

