//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveLikeUserInfo : NSObject
{
    unsigned int _liveIdentity;
    NSString *_nickname;
    NSString *_headUrl;
}

+ (id)createLikeUserInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int liveIdentity; // @synthesize liveIdentity=_liveIdentity;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;

@end

