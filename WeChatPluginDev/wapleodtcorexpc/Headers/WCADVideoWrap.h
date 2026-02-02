//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCADVideoWrap : NSObject
{
    NSString *adID;
    NSString *publishID;
    NSString *uxInfo;
    unsigned long long startTime;
    NSMutableArray *arrPlayInfo;
    unsigned int scene;
    unsigned long long videoPlaybackTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long videoPlaybackTime; // @synthesize videoPlaybackTime;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(retain, nonatomic) NSMutableArray *arrPlayInfo; // @synthesize arrPlayInfo;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID;
@property(retain, nonatomic) NSString *adID; // @synthesize adID;
- (id)init;

@end

