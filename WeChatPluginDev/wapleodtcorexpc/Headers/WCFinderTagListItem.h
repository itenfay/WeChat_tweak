//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTagListItem : NSObject
{
    NSString *_title;
    id _userInfo;
}

+ (id)itemWithTitle:(id)arg1 userInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end

