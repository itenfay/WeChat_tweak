//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCommentDetailAvatarUpdateInfo : NSObject
{
    NSString *_url;
    NSString *_nickname;
    unsigned long long _type;
    unsigned long long _imageDisplayStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long imageDisplayStyle; // @synthesize imageDisplayStyle=_imageDisplayStyle;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithUrl:(id)arg1 nickname:(id)arg2 type:(unsigned long long)arg3 imageDisplayStyle:(unsigned long long)arg4;

@end

