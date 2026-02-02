//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMFinderLiveKTVSongResource : NSObject
{
    unsigned int _type;
    int _compressType;
    NSData *_content;
    long long _updateTime;
    NSString *_version;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) long long updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) int compressType; // @synthesize compressType=_compressType;
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

