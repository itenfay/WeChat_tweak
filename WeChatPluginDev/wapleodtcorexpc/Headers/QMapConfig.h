//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, QTrafficStyle;

@interface QMapConfig : NSObject
{
    _Bool _enableMSAA;
    int _overseaSourceType;
    NSString *_subID;
    NSString *_subKey;
    NSString *_mapFont;
    NSDictionary *_preset;
    QTrafficStyle *_trafficStyle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableMSAA; // @synthesize enableMSAA=_enableMSAA;
@property(retain, nonatomic) QTrafficStyle *trafficStyle; // @synthesize trafficStyle=_trafficStyle;
@property(nonatomic) int overseaSourceType; // @synthesize overseaSourceType=_overseaSourceType;
@property(copy, nonatomic) NSDictionary *preset; // @synthesize preset=_preset;
@property(copy, nonatomic) NSString *mapFont; // @synthesize mapFont=_mapFont;
@property(readonly, copy, nonatomic) NSString *subKey; // @synthesize subKey=_subKey;
@property(readonly, copy, nonatomic) NSString *subID; // @synthesize subID=_subID;
- (id)initWithSubID:(id)arg1 subKey:(id)arg2;

@end

