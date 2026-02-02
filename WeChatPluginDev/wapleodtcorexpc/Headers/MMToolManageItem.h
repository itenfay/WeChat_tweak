//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMToolManageItem : NSObject
{
    NSString *_name;
    NSString *_iconUrl;
    NSObject *_rawData;
    NSString *_appUserName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(retain, nonatomic) NSObject *rawData; // @synthesize rawData=_rawData;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initFromChatRoomToolWeAppInfo:(id)arg1;

@end

