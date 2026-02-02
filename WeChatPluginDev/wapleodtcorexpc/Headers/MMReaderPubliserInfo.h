//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMReaderPubliserInfo : NSObject
{
    _Bool _showFollowButton;
    unsigned int _headType;
    unsigned int _nicknameType;
    NSString *_headImg;
    NSString *_nickname;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned int nicknameType; // @synthesize nicknameType=_nicknameType;
@property(retain, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
@property(nonatomic) unsigned int headType; // @synthesize headType=_headType;
@property(nonatomic) _Bool showFollowButton; // @synthesize showFollowButton=_showFollowButton;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

