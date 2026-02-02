//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ShakeMusicInfo : NSObject
{
    NSString *_appId;
    NSMutableArray *_music;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableArray *music; // @synthesize music=_music;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

