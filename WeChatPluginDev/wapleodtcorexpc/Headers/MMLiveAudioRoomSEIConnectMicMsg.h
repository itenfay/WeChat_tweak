//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMLiveAudioRoomSEIConnectMicMsg : NSObject
{
    NSArray *_list;
    unsigned long long _i;
    NSArray *_sl;
    unsigned long long _m;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m; // @synthesize m=_m;
@property(retain, nonatomic) NSArray *sl; // @synthesize sl=_sl;
@property(nonatomic) unsigned long long i; // @synthesize i=_i;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (unsigned long long)micLayoutMode;

@end

