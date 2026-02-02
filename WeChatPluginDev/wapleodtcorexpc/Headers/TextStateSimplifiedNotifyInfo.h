//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStateSimplifiedNotifyInfo : NSObject
{
    _Bool _isContact;
    unsigned int _createTime;
    NSString *_username;
    NSString *_headImageUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isContact; // @synthesize isContact=_isContact;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)initWithNotifyInfo:(id)arg1;

@end

