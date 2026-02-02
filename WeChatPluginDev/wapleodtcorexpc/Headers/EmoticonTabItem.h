//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonTabItem : NSObject
{
    unsigned int downloadStatus;
    int type;
    NSString *packageId;
    NSString *iconUrl;
    NSString *panelUrl;
    NSString *_accessibilityName;
    NSObject *_m_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(retain, nonatomic) NSString *accessibilityName; // @synthesize accessibilityName=_accessibilityName;
@property(retain, nonatomic) NSString *panelUrl; // @synthesize panelUrl;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) unsigned int downloadStatus; // @synthesize downloadStatus;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId;
- (id)init;

@end

