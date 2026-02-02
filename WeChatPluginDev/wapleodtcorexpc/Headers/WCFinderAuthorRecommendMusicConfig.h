//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderAuthorRecommendMusicConfig : NSObject
{
    NSString *_listen_id;
    long long _like_state;
}

- (void).cxx_destruct;
@property(nonatomic) long long like_state; // @synthesize like_state=_like_state;
@property(copy, nonatomic) NSString *listen_id; // @synthesize listen_id=_listen_id;
- (id)initWithJSONString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)toJsonStr;
- (id)description;

@end

