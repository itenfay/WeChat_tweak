//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMFinderLiveKtvPlayerWaitListInfo : NSObject
{
    unsigned int _playerWaitListAllSize;
    NSArray *_playerWaitList;
    unsigned long long _version;
}

+ (id)generateWaitListInfoFromPb:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *playerWaitList; // @synthesize playerWaitList=_playerWaitList;
@property(nonatomic) unsigned int playerWaitListAllSize; // @synthesize playerWaitListAllSize=_playerWaitListAllSize;
- (id)description;

@end

