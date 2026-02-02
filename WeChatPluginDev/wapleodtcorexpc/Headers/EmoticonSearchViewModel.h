//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface EmoticonSearchViewModel : NSObject
{
    int _state;
    NSArray *_recommendWraps;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *recommendWraps; // @synthesize recommendWraps=_recommendWraps;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)md5s;
- (id)errorTips;
- (_Bool)onLoading;

@end

