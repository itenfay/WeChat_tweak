//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AppSettingItem : NSObject
{
    _Bool appAddedByUser;
    unsigned int flag;
    NSString *openID;
    NSString *appID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(nonatomic) _Bool appAddedByUser; // @synthesize appAddedByUser;
@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(retain, nonatomic) NSString *openID; // @synthesize openID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

