//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayDynamicActionEntry : NSObject
{
    int _entrance_type;
    NSString *_dialogId;
    NSString *_wording;
    NSString *_color;
    long long _type;
    NSString *_nativeUrl;
    NSString *_webUrl;
    NSString *_tinyAppUsername;
    NSString *_tinyAppPath;
}

+ (id)genFromDict:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int entrance_type; // @synthesize entrance_type=_entrance_type;
@property(retain, nonatomic) NSString *tinyAppPath; // @synthesize tinyAppPath=_tinyAppPath;
@property(retain, nonatomic) NSString *tinyAppUsername; // @synthesize tinyAppUsername=_tinyAppUsername;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *nativeUrl; // @synthesize nativeUrl=_nativeUrl;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) NSString *dialogId; // @synthesize dialogId=_dialogId;

@end

