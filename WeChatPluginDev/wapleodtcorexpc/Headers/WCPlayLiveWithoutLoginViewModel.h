//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WCPlayLiveWithoutLoginViewModel : NSObject
{
    NSString *_nickname;
    NSURL *_headViewURL;
    NSString *_liveStreamUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *liveStreamUrl; // @synthesize liveStreamUrl=_liveStreamUrl;
@property(retain, nonatomic) NSURL *headViewURL; // @synthesize headViewURL=_headViewURL;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;

@end

