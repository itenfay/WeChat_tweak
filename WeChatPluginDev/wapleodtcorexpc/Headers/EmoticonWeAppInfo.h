//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonWeAppInfo : NSObject
{
    NSString *_iconUrl;
    NSString *_name;
    NSString *_actionDesc;
    NSString *_weAppID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *weAppID; // @synthesize weAppID=_weAppID;
@property(retain, nonatomic) NSString *actionDesc; // @synthesize actionDesc=_actionDesc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

