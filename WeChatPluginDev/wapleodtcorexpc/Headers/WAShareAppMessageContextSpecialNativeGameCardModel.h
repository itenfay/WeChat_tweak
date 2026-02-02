//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAShareAppMessageContextSpecialNativeGameCardModel : NSObject
{
    int _appBrandPriority;
    NSString *_appID;
    NSString *_appName;
    NSString *_liteGameInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int appBrandPriority; // @synthesize appBrandPriority=_appBrandPriority;
@property(copy, nonatomic) NSString *liteGameInfo; // @synthesize liteGameInfo=_liteGameInfo;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;

@end

