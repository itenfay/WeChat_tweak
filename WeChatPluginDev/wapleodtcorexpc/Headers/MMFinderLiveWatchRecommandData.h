//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface MMFinderLiveWatchRecommandData : NSObject
{
    NSMutableArray *_navContainerReadIds;
    NSData *_navLastBuffer;
    NSData *_navContainerLastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *navContainerLastBuffer; // @synthesize navContainerLastBuffer=_navContainerLastBuffer;
@property(retain, nonatomic) NSData *navLastBuffer; // @synthesize navLastBuffer=_navLastBuffer;
@property(retain, nonatomic) NSMutableArray *navContainerReadIds; // @synthesize navContainerReadIds=_navContainerReadIds;
- (id)init;

@end

