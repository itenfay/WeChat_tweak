//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteGameInfo : NSObject
{
    NSString *_liteGameName;
    NSString *_liteGameIconUrl;
    NSString *_liteGameDeveloper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *liteGameDeveloper; // @synthesize liteGameDeveloper=_liteGameDeveloper;
@property(retain, nonatomic) NSString *liteGameIconUrl; // @synthesize liteGameIconUrl=_liteGameIconUrl;
@property(retain, nonatomic) NSString *liteGameName; // @synthesize liteGameName=_liteGameName;

@end

