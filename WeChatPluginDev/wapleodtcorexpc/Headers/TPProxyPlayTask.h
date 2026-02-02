//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPProxyPlayTask : NSObject
{
    int _playId;
    long long _definitionId;
    NSString *_playUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) int playId; // @synthesize playId=_playId;
@property(nonatomic) long long definitionId; // @synthesize definitionId=_definitionId;

@end

