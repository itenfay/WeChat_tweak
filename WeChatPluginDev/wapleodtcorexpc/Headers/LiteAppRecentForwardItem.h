//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteAppRecentForwardItem : NSObject
{
    NSString *_nsEncryUserName;
    NSString *_nsNickName;
    NSString *_nsHeadImgUrl;
    NSString *_nsDefaultHeadImgUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsDefaultHeadImgUrl; // @synthesize nsDefaultHeadImgUrl=_nsDefaultHeadImgUrl;
@property(retain, nonatomic) NSString *nsHeadImgUrl; // @synthesize nsHeadImgUrl=_nsHeadImgUrl;
@property(retain, nonatomic) NSString *nsNickName; // @synthesize nsNickName=_nsNickName;
@property(retain, nonatomic) NSString *nsEncryUserName; // @synthesize nsEncryUserName=_nsEncryUserName;
- (id)toNSDictionary;
- (id)initWithUserName:(id)arg1 nickName:(id)arg2 headImageUrl:(id)arg3 defaultHeadImageUrl:(id)arg4;

@end

