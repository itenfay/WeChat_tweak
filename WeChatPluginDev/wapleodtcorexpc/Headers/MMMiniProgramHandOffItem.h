//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMMiniProgramHandOffItem
{
    NSString *_icon;
    NSString *_appid;
    NSString *_appentrypage;
    NSString *_appusername;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appusername; // @synthesize appusername=_appusername;
@property(copy, nonatomic) NSString *appentrypage; // @synthesize appentrypage=_appentrypage;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (id)initFromMinimizeTaskData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

