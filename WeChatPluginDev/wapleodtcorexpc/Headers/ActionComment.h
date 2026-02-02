//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ActionComment : NSObject
{
    NSString *_imageUrl;
    NSString *_nickName;
    NSString *_content;
    NSString *_link;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

