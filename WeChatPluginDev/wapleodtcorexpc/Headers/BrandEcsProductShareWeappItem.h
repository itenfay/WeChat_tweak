//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BrandEcsProductShareWeappItem : NSObject
{
    NSString *_appid;
    NSString *_usrname;
    NSString *_iconUrl;
    NSString *_sourceDisplayName;
    NSString *_path;
    NSNumber *_bizType;
    NSString *_title;
    NSString *_desc;
    NSString *_imageUrl;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppid:(id)arg1 usrname:(id)arg2 iconUrl:(id)arg3 sourceDisplayName:(id)arg4 path:(id)arg5 bizType:(id)arg6 title:(id)arg7 desc:(id)arg8 imageUrl:(id)arg9;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *sourceDisplayName; // @synthesize sourceDisplayName=_sourceDisplayName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *usrname; // @synthesize usrname=_usrname;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)toList;

@end

