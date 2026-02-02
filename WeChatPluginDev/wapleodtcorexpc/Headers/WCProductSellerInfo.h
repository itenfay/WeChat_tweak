//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCProductLocationInfo;

@interface WCProductSellerInfo : NSObject
{
    unsigned int flag;
    NSString *appID;
    NSString *usrName;
    NSString *name;
    WCProductLocationInfo *locationInfo;
    NSString *contactWay;
    NSString *logoImg;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(retain, nonatomic) NSString *logoImg; // @synthesize logoImg;
@property(retain, nonatomic) NSString *contactWay; // @synthesize contactWay;
@property(retain, nonatomic) WCProductLocationInfo *locationInfo; // @synthesize locationInfo;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;

@end

