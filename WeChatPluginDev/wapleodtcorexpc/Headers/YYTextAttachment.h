//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface YYTextAttachment : NSObject
{
    id _content;
    long long _contentMode;
    NSDictionary *_userInfo;
    struct UIEdgeInsets _contentInsets;
}

+ (id)attachmentWithContent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) id content; // @synthesize content=_content;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

